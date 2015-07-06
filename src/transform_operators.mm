//
//  Created by Aditya Atluri on 7/6/15.
//  Copyright © 2015 Aditya Atluri. All rights reserved.
//
/*
This file contains the transform test case of Vulpes.
*/
#include <iostream>
#include <string>
#include "vulpes.hpp"
#include <vector>

int main(int argc, const char * argv[]) {
    // Declaring floats for testing plus, minus, multiplies, divides and negates
    float a[] = {1,2,3,4,5,6};
    float b[] = {2,3,4,5,6,7};
    
    // Declaring ints for testing modulus
    int x[] = {1,2,3,4,5,6};
    int y[] = {2,3,4,5,6,7};
    
    // Creating output vectors on CPU
    std::vector<float,aligned_allocator<float>>c(6);
    std::vector<int,aligned_allocator<int>>z(6);
    
    // Creating vectors on GPU. Memory copy done here.
    vulpes::vector<float> ad(a,a+6);
    vulpes::vector<float> bd(b,b+6);
    vulpes::vector<float> cd(c);
    
    vulpes::vector<int> xd(x,x+6);
    vulpes::vector<int> yd(y,y+6);
    vulpes::vector<int> zd(z);
    
    // Test for transform that operates "plus" across the elements of vectors using Metal.
    vulpes::transform(ad.begin(), ad.end(), bd.begin(), cd.begin(), vulpes::plus<float>());
    std::cout<<c[0]<<std::endl;
    
    // Test for transform that operates "minus" across the elements of vectors using Metal.
    vulpes::transform(ad.begin(), ad.end(), bd.begin(), cd.begin(), vulpes::minus<float>());
    std::cout<<c[1]<<std::endl;
    
    // Test for transform that operates "multiplies" across the elements of vectors using Metal.
    vulpes::transform(ad.begin(), ad.end(), bd.begin(), cd.begin(), vulpes::multiplies<float>());
    std::cout<<c[2]<<std::endl;
    
    // Test for transform that operates "divides" across the elements of vectors using Metal.
    vulpes::transform(ad.begin(), ad.end(), bd.begin(), cd.begin(), vulpes::divides<float>());
    std::cout<<c[3]<<std::endl;
    
    // Test for transform that operates "negates" across the elements of vectors using Metal.
    vulpes::transform(ad.begin(), ad.end(), cd.begin(), vulpes::negate<float>());
    std::cout<<c[4]<<std::endl;
    
    // Test for transform that operates "modulus" across the elements of vectors using Metal.
    vulpes::transform(xd.begin(), xd.end(), yd.begin(), zd.begin(), vulpes::modulus<int>());
    std::cout<<z[5]<<std::endl;
    
    return 0;
}
