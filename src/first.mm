//
//  Created by Aditya Atluri on 7/2/15.
//  Copyright © 2015 Aditya Atluri. All rights reserved.
//
/*
This file contains the first test case of Vulpes.
*/
#include <iostream>
#include <string>
#include "vulpes.hpp"
#include <vector>

int main(int argc, const char * argv[]) {

    // An available Metal device is retrieved.
    vulpes::device device = vulpes::system::default_device();
    
    // A new Metal command queue is generated.
    vulpes::command_queue queue(device);
    
    // Host vectors are allocated.
    unsigned len = 1025;
    std::vector<int> vhost1(len);
    std::vector<int> vhost2(len);
    
    // Host vector whose data is written from memory is  allocated.
    // This data should be page aligned. This makes 'NO' GPU to CPU memory copy.
    std::vector<int,aligned_allocator<int>> vhost3(len);
    
    // Host data is generated.
    for(unsigned i=0;i<len;i++){
        vhost1[i] = i;
        vhost2[i] = i;
    }
    
    // Device vectors are generated.
    // As in, memory on GPU.
    vulpes::vector<int> vdevice1(len, device);
    vulpes::vector<int> vdevice2(len, device);
    vulpes::vector<int> vdevice3(vhost3, device);
    
    // The data from CPU to GPU is transferred.
    vulpes::vcopy(vhost1.begin(), vhost1.end(), vdevice1, device);
    vulpes::vcopy(vhost2.begin(), vhost2.end(), vdevice2, device);
    
    // Metal source is generated
    std::string src = METAL_SRC(kernel void add(const device int *In1 [[buffer(0)]],
                                           const device int *In2 [[buffer(1)]],
                                           device int *Out [[buffer(2)]],
                                           uint tid [[thread_position_in_grid]]){
        Out[tid] = In1[tid] + In2[tid];
    });
    
    // Here, Metal shader is build from source.
    vulpes::program program = vulpes::create_with_source(src, device, queue);
    
    // The function is set by passing the kernel name.
    vulpes::function function(program, "add");
    
    // The program is build.
    program.build();
    
    // The arguments are set here.
    function.set_arg(0, 0, vdevice1);
    function.set_arg(1, 0, vdevice2);
    function.set_arg(2, 0, vdevice3);
    
    // The program is run here with passing number of threads and number of thread groups.
    program.run({len/512,1,1}, {512,1,1});
    
    // Print out the output.
    std::cout<<vhost3[10]<<std::endl;
    
    return 0;
}
