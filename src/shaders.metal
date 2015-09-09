//
//  shaders.metal
//
//  Created by Aditya Atluri on 9/9/15.
//  Copyright © 2015 Aditya Atluri. All rights reserved.
//

#include <metal_stdlib>
using namespace metal;


kernel void square_float(const device float *In[[buffer(0)]],
                   device float *Out[[buffer(1)]],
                   uint tid [[thread_position_in_grid]]){
    Out[tid] = In[tid] * In[tid];
}
