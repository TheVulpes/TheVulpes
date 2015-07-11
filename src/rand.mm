//
//  Created by Aditya Atluri on 7/11/15.
//  Copyright © 2015 Aditya Atluri. All rights reserved.
//
#include <iostream>
#include <string>
#include "vulpes.hpp"
#include <vector>

int main(int argc, const char * argv[]) {

    // An available Metal device is retrieved.
    vulpes::device device = vulpes::system::default_device();
    
    size_t len = 1024*1024*63;
    
    // Host vectors are allocated.
    std::vector<float> In(len);
    std::vector<float,aligned_allocator<float>> Out(len);
    
    // Data in the host vectors are filled.
    std::generate(In.begin(), In.end(), rand);
    
    // Device or GPU vectors are allocated
    vulpes::vector<float> Ind(In, device);
    vulpes::vector<float> Outd(Out, device);
    
    // Square root is applied on all the data elements
    vulpes::transform(Ind.begin(), Ind.end(), Outd.begin(), vulpes::sqrt<float>());
    
    // The data is printed out
    std::cout<<In[11]<< " " << Out[11]<<std::endl;
    
}
