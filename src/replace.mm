//
//  Created by Aditya Atluri on 8/6/15.
//  Copyright © 2015 Aditya Atluri. All rights reserved.
//

#include <iostream>
#include <string>
#include "vulpes.hpp"
#include <vector>

int main(int argc, const char * argv[]) {
    // Initialise host aligned vector of size 100
    std::vector<int, aligned_allocator<int>> H(100);
    
    // Create device vector from host vector
    vulpes::vector<int>D(H);
    
    // Fill the values of all the elements using 'fill'
    vulpes::fill(D.begin(), D.end(), 10);
    
    // Using 'vulpes::replace', make all the elements which are 10 to 1
    vulpes::replace(D.begin(), D.end(), 10, 1);
    
    // Print out the value of element at index 10
    std::cout<<D[10]<<std::endl;
    
    // Output: 1
}
