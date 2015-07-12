//
//  Created by Aditya Atluri on 7/12/15.
//  Copyright © 2015 Aditya Atluri. All rights reserved.
//

#include <iostream>
#include <string>
#include "vulpes.hpp"
#include <vector>

int main(int argc, const char * argv[]) {

  // Created a 4 element Host vector
  std::vector<int>H(4);
  
  // Assigning values to the vector
  for(unsigned i=0;i<H.size();i++){
    H[i] = 1;
  }
  
  // Creating a device vector and copying data to it from host vector
  vulpes::vector<int> D = H;
  
  // Changing value of an element in device vector
  D[0] = 2;
  
  // Printing out the device vector
  for(unsigned i=0;i<D.size();i++){
    std::cout<<D[i]<<std::endl;
  }
  
  return 0;
}
