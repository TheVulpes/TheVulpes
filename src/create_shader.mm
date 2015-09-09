//
//  Created by Aditya Atluri on 9/9/15.
//  Copyright © 2015 Aditya Atluri. All rights reserved.
//

/*
Loading shaders from metal files is tested here!
*/

#include <iostream>
#include <string>
#include "vulpes.hpp"
#include <vector>

int main(int argc, const char * argv[]){
    // Creating device to run
    vulpes::device device = vulpes::system::default_device();
    
    // Creating a queue
    vulpes::command_queue queue(device);
    
    // Creating vectors of length 1048576
    unsigned len = 1024*1024;
    std::vector<float,aligned_allocator<float>>In1(len);
    std::vector<float,aligned_allocator<float>>Out(len);
    
    // Creating vectors on device
    vulpes::vector<float>Ind(In1);
    vulpes::vector<float>Outd(Out);
    
    // Fill the entire vector with value 10
    vulpes::fill(Ind.begin(), Ind.end(), 10.0f);
    
    // Create a program from device and queue
    vulpes::program Program = vulpes::create_from_metal(device, queue);
    
    // Name of the shader
    std::string name("square_float");
    
    // Creating a function from program
    vulpes::function Function(Program,name);
    
    // Building the program
    Program.build();
    
    // Assigning arrays to arguments of shader
    Program.set_args(0, 0, Ind);
    Program.set_args(1, 0, Outd);
    
    // Executing the shader with thread and thread block values
    Program.run({len/512,1,1}, {512,1,1});
    
    // Printing out the data
    std::cout<<Out[1]<<std::endl;
    
    return 0;
}
