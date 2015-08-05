//
//  Created by Aditya Atluri on 8/6/15.
//  Copyright © 2015 Aditya Atluri. All rights reserved.
//

#include <iostream>
#include <string>
#include "vulpes.hpp"
#include <vector>

int main(int argc, const char * argv[]) {
    // Create an aligned vector of length 100
    std::vector<int,aligned_allocator<int>> H(100);
    
    // Create device vector from host vector
    vulpes::vector<int>D(H);
    
    // Assigning value 9 to all elements in the GPU vector
    vulpes::fill(D.begin(), D.end(),9);
    
    // Re-assigning the first 5 elements to 10
    vulpes::fill(D.begin(), D.begin() + 5, 10);
    
    // Displaying the data from device vector at locations 2 and 10.
    std::cout<<D.at(2)<<" "<<D.at(10)<<std::endl;
    
    // Output: 10 9
}
