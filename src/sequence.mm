//
//  Created by Aditya Atluri on 8/6/15.
//  Copyright © 2015 Aditya Atluri. All rights reserved.
//

#include <iostream>
#include <string>
#include "vulpes.hpp"
#include <vector>

int main(int argc, const char * argv[]) {
    // Create aligned vectors of length 100
    std::vector<int,aligned_allocator<int>> H(100);
    
    // Create device vector from host vector
    vulpes::vector<int>D(H);
    
    // Assigning values to device vector using sequence
    vulpes::sequence(D.begin(), D.end());
    // The values in D: 0, 1, 2, 3, 4
    
    // Assigning values to device vector using fill
    vulpes::fill(D.begin(), D.begin() + 5, 10);
    // The values in D: 10, 10, 10, 10, 10
    
    // Printing out values of D at 0 and 13
    std::cout<<D.at(0)<<" "<<D.at(13)<<std::endl;
    
    // Output: 10 13
    
    // Assigning values to device vector starting value of 1 with step 2
    vulpes::sequence(D.begin(), D.end(), 1, 2);
    
    // Printing out value at index 4 of device vector
    std::cout<<D[4]<<std::endl;
    
    // Output: 9
    
    // Assigning values to device vector starting value of 5
    vulpes::sequence(D.begin(), D.end(), 5);
    
    // Printing out value at index 2 of device vector
    std::cout<<D[2]<<std::endl;
    
    // Output: 7
}
