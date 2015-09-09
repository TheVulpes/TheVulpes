//
//  algorithm.metal
//  
//
//  Created by Aditya Atluri on 8/14/15.
//
//

#include <metal_stdlib>
#include <metal_math>
using namespace metal;

/*
 All PLUS start here!
*/

kernel void functional_plus_char(const device char* In1[[buffer(0)]],
                            const device char* In2[[buffer(1)]],
                            device char* Out[[buffer(2)]],
                            uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] + In2[tid];
}

kernel void functional_plus_unsigned_char(const device unsigned char* In1[[buffer(0)]],
                            const device unsigned char* In2[[buffer(1)]],
                            device unsigned char* Out[[buffer(2)]],
                            uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] + In2[tid];
}

kernel void functional_plus_short(const device short* In1[[buffer(0)]],
                            const device short* In2[[buffer(1)]],
                            device short* Out[[buffer(2)]],
                            uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] + In2[tid];
}

kernel void functional_plus_unsigned_short(const device unsigned short* In1[[buffer(0)]],
                            const device unsigned short* In2[[buffer(1)]],
                            device unsigned short* Out[[buffer(2)]],
                            uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] + In2[tid];
}

kernel void functional_plus_ushort(const device ushort* In1[[buffer(0)]],
                            const device ushort* In2[[buffer(1)]],
                            device ushort* Out[[buffer(2)]],
                            uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] + In2[tid];
}

kernel void functional_plus_int(const device int* In1[[buffer(0)]],
                            const device int* In2[[buffer(1)]],
                            device int* Out[[buffer(2)]],
                            uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] + In2[tid];
}

kernel void functional_plus_unsigned_int(const device unsigned int* In1[[buffer(0)]],
                            const device unsigned int* In2[[buffer(1)]],
                            device unsigned int* Out[[buffer(2)]],
                            uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] + In2[tid];
}

kernel void functional_plus_uint(const device uint* In1[[buffer(0)]],
                            const device uint* In2[[buffer(1)]],
                            device uint* Out[[buffer(2)]],
                            uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] + In2[tid];
}

kernel void functional_plus_float(const device float* In1[[buffer(0)]],
                            const device float* In2[[buffer(1)]],
                            device float* Out[[buffer(2)]],
                            uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] + In2[tid];
}

/*
 All the MINUS Here!
*/

kernel void functional_minus_char(const device char* In1[[buffer(0)]],
                             const device char* In2[[buffer(1)]],
                             device char* Out[[buffer(2)]],
                             uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] - In2[tid];
}

kernel void functional_minus_unsigned_char(const device unsigned char* In1[[buffer(0)]],
                             const device unsigned char* In2[[buffer(1)]],
                             device unsigned char* Out[[buffer(2)]],
                             uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] - In2[tid];
}

kernel void functional_minus_short(const device short* In1[[buffer(0)]],
                             const device short* In2[[buffer(1)]],
                             device short* Out[[buffer(2)]],
                             uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] - In2[tid];
}

kernel void functional_minus_unsigned_short(const device unsigned short* In1[[buffer(0)]],
                             const device unsigned short* In2[[buffer(1)]],
                             device unsigned short* Out[[buffer(2)]],
                             uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] - In2[tid];
}

kernel void functional_minus_ushort(const device ushort* In1[[buffer(0)]],
                             const device ushort* In2[[buffer(1)]],
                             device ushort* Out[[buffer(2)]],
                             uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] - In2[tid];
}


kernel void functional_minus_int(const device int* In1[[buffer(0)]],
                             const device int* In2[[buffer(1)]],
                             device int* Out[[buffer(2)]],
                             uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] - In2[tid];
}

kernel void functional_minus_unsigned_int(const device unsigned int* In1[[buffer(0)]],
                             const device unsigned int* In2[[buffer(1)]],
                             device unsigned int* Out[[buffer(2)]],
                             uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] - In2[tid];
}

kernel void functional_minus_uint(const device uint* In1[[buffer(0)]],
                             const device uint* In2[[buffer(1)]],
                             device uint* Out[[buffer(2)]],
                             uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] - In2[tid];
}

kernel void functional_minus_float(const device float* In1[[buffer(0)]],
                             const device float* In2[[buffer(1)]],
                             device float* Out[[buffer(2)]],
                             uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] - In2[tid];
}

/*
 All the multiplies here!
*/

kernel void functional_multiplies_char(const device char* In1[[buffer(0)]],
                                  const device char* In2[[buffer(1)]],
                                  device char* Out[[buffer(2)]],
                                  uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] * In2[tid];
}

kernel void functional_multiplies_unsigned_char(const device unsigned char* In1[[buffer(0)]],
                                  const device unsigned char* In2[[buffer(1)]],
                                  device unsigned char* Out[[buffer(2)]],
                                  uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] * In2[tid];
}

kernel void functional_multiplies_short(const device short* In1[[buffer(0)]],
                                  const device short* In2[[buffer(1)]],
                                  device short* Out[[buffer(2)]],
                                  uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] * In2[tid];
}

kernel void functional_multiplies_unsigned_short(const device unsigned short* In1[[buffer(0)]],
                                  const device unsigned short* In2[[buffer(1)]],
                                  device unsigned short* Out[[buffer(2)]],
                                  uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] * In2[tid];
}

kernel void functional_multiplies_ushort(const device ushort* In1[[buffer(0)]],
                                  const device ushort* In2[[buffer(1)]],
                                  device ushort* Out[[buffer(2)]],
                                  uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] * In2[tid];
}

kernel void functional_multiplies_int(const device int* In1[[buffer(0)]],
                                  const device int* In2[[buffer(1)]],
                                  device int* Out[[buffer(2)]],
                                  uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] * In2[tid];
}

kernel void functional_multiplies_unsigned_int(const device unsigned int* In1[[buffer(0)]],
                                  const device unsigned int* In2[[buffer(1)]],
                                  device unsigned int* Out[[buffer(2)]],
                                  uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] * In2[tid];
}

kernel void functional_multiplies_uint(const device uint* In1[[buffer(0)]],
                                  const device uint* In2[[buffer(1)]],
                                  device uint* Out[[buffer(2)]],
                                  uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] * In2[tid];
}

kernel void functional_multiplies_float(const device float* In1[[buffer(0)]],
                                  const device float* In2[[buffer(1)]],
                                  device float* Out[[buffer(2)]],
                                  uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] * In2[tid];
}

/*
 All the divides here!
*/

kernel void functional_divides_char(const device char* In1[[buffer(0)]],
                               const device char* In2[[buffer(1)]],
                               device char* Out[[buffer(2)]],
                               uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] / In2[tid];
}

kernel void functional_divides_unsigned_char(const device unsigned char* In1[[buffer(0)]],
                               const device unsigned char* In2[[buffer(1)]],
                               device unsigned char* Out[[buffer(2)]],
                               uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] / In2[tid];
}
    
kernel void functional_divides_short(const device short* In1[[buffer(0)]],
                               const device short* In2[[buffer(1)]],
                               device short* Out[[buffer(2)]],
                               uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] / In2[tid];
}

kernel void functional_divides_unsigned_short(const device unsigned short* In1[[buffer(0)]],
                               const device unsigned short* In2[[buffer(1)]],
                               device unsigned short* Out[[buffer(2)]],
                               uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] / In2[tid];
}
    
kernel void functional_divides_ushort(const device ushort* In1[[buffer(0)]],
                               const device ushort* In2[[buffer(1)]],
                               device ushort* Out[[buffer(2)]],
                               uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] / In2[tid];
}
    
kernel void functional_divides_int(const device int* In1[[buffer(0)]],
                               const device int* In2[[buffer(1)]],
                               device int* Out[[buffer(2)]],
                               uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] / In2[tid];
}

kernel void functional_divides_unsigned_int(const device unsigned int* In1[[buffer(0)]],
                               const device unsigned int* In2[[buffer(1)]],
                               device unsigned int* Out[[buffer(2)]],
                               uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] / In2[tid];
}

kernel void functional_divides_uint(const device uint* In1[[buffer(0)]],
                               const device uint* In2[[buffer(1)]],
                               device uint* Out[[buffer(2)]],
                               uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] / In2[tid];
}

kernel void functional_divides_float(const device float* In1[[buffer(0)]],
                               const device float* In2[[buffer(1)]],
                               device float* Out[[buffer(2)]],
                                     uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] / In2[tid];
}

/*
 All modulus here!
*/

kernel void functional_modulus_char(const device char* In1[[buffer(0)]],
                               const device char* In2[[buffer(1)]],
                               device char* Out[[buffer(2)]],
                               uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] % In2[tid];
}

kernel void functional_modulus_unsigned_char(const device unsigned char* In1[[buffer(0)]],
                               const device unsigned char* In2[[buffer(1)]],
                               device unsigned char* Out[[buffer(2)]],
                               uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] % In2[tid];
}

kernel void functional_modulus_short(const device short* In1[[buffer(0)]],
                               const device short* In2[[buffer(1)]],
                               device short* Out[[buffer(2)]],
                               uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] % In2[tid];
}

kernel void functional_modulus_unsigned_short(const device unsigned short* In1[[buffer(0)]],
                               const device unsigned short* In2[[buffer(1)]],
                               device unsigned short* Out[[buffer(2)]],
                               uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] % In2[tid];
}

kernel void functional_modulus_ushort(const device ushort* In1[[buffer(0)]],
                               const device ushort* In2[[buffer(1)]],
                               device ushort* Out[[buffer(2)]],
                               uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] % In2[tid];
}

kernel void functional_modulus_int(const device int* In1[[buffer(0)]],
                               const device int* In2[[buffer(1)]],
                               device int* Out[[buffer(2)]],
                               uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] % In2[tid];
}

kernel void functional_modulus_unsigned_int(const device unsigned int* In1[[buffer(0)]],
                               const device unsigned int* In2[[buffer(1)]],
                               device unsigned int* Out[[buffer(2)]],
                               uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] % In2[tid];
}

kernel void functional_modulus_float(const device uint* In1[[buffer(0)]],
                               const device uint* In2[[buffer(1)]],
                               device uint* Out[[buffer(2)]],
                               uint tid [[thread_position_in_grid]]){
    Out[tid] = In1[tid] % In2[tid];
}

/*
 All negate here!
*/

kernel void functional_negate_char(const device char* In1[[buffer(0)]],
                                   device char* Out[[buffer(1)]],
                                   uint tid [[thread_position_in_grid]]){
    Out[tid] = - In1[tid];
}

kernel void functional_negate_short(const device short* In1[[buffer(0)]],
                                    device short* Out[[buffer(1)]],
                                    uint tid [[thread_position_in_grid]]){
    Out[tid] = - In1[tid];
}

kernel void functional_negate_int(const device int* In1[[buffer(0)]],
                                  device int* Out[[buffer(1)]],
                                  uint tid [[thread_position_in_grid]]){
    Out[tid] = - In1[tid];
}

kernel void functional_negate_float(const device float* In1[[buffer(0)]],
                                    device float* Out[[buffer(1)]],
                                    uint tid [[thread_position_in_grid]]){
    Out[tid] = - In1[tid];
}

/*
 All equal_to here!
*/

kernel void functional_equal_to_char(const device char* In1[[buffer(0)]],
                                const device char* In2[[buffer(1)]],
                                device unsigned* Out[[buffer(2)]],
                                uint tid [[thread_position_in_grid]]){
    if(In1[tid] == In2[tid]){
        Out[tid] = 1;
    } else {
        Out[tid] = 0;
    }
}

kernel void functional_equal_to_unsigned_char(const device unsigned char* In1[[buffer(0)]],
                                const device unsigned char* In2[[buffer(1)]],
                                device unsigned* Out[[buffer(2)]],
                                uint tid [[thread_position_in_grid]]){
    if(In1[tid] == In2[tid]){
        Out[tid] = 1;
    } else {
        Out[tid] = 0;
    }
}

kernel void functional_equal_to_short(const device short* In1[[buffer(0)]],
                                const device short* In2[[buffer(1)]],
                                device unsigned* Out[[buffer(2)]],
                                uint tid [[thread_position_in_grid]]){
    if(In1[tid] == In2[tid]){
        Out[tid] = 1;
    } else {
        Out[tid] = 0;
    }
}

kernel void functional_equal_to_unsigned_short(const device unsigned short* In1[[buffer(0)]],
                                const device unsigned short* In2[[buffer(1)]],
                                device unsigned* Out[[buffer(2)]],
                                uint tid [[thread_position_in_grid]]){
    if(In1[tid] == In2[tid]){
        Out[tid] = 1;
    } else {
        Out[tid] = 0;
    }
}

kernel void functional_equal_to_ushort(const device ushort* In1[[buffer(0)]],
                                const device ushort* In2[[buffer(1)]],
                                device unsigned* Out[[buffer(2)]],
                                uint tid [[thread_position_in_grid]]){
    if(In1[tid] == In2[tid]){
        Out[tid] = 1;
    } else {
        Out[tid] = 0;
    }
}

kernel void functional_equal_to_int(const device int* In1[[buffer(0)]],
                                const device int* In2[[buffer(1)]],
                                device unsigned* Out[[buffer(2)]],
                                uint tid [[thread_position_in_grid]]){
    if(In1[tid] == In2[tid]){
        Out[tid] = 1;
    } else {
        Out[tid] = 0;
    }
}

kernel void functional_equal_to_unsigned_int(const device unsigned int* In1[[buffer(0)]],
                                const device unsigned int* In2[[buffer(1)]],
                                device unsigned* Out[[buffer(2)]],
                                uint tid [[thread_position_in_grid]]){
    if(In1[tid] == In2[tid]){
        Out[tid] = 1;
    } else {
        Out[tid] = 0;
    }
}

kernel void functional_equal_to_uint(const device uint* In1[[buffer(0)]],
                                const device uint* In2[[buffer(1)]],
                                device unsigned* Out[[buffer(2)]],
                                uint tid [[thread_position_in_grid]]){
    if(In1[tid] == In2[tid]){
        Out[tid] = 1;
    } else {
        Out[tid] = 0;
    }
}

kernel void functional_equal_to_float(const device float* In1[[buffer(0)]],
                                const device float* In2[[buffer(1)]],
                                device unsigned* Out[[buffer(2)]],
                                uint tid [[thread_position_in_grid]]){
    if(In1[tid] == In2[tid]){
        Out[tid] = 1;
    } else {
        Out[tid] = 0;
    }
}
/*
 All sqrts here!
*/
/*
kernel void functional_sqrt_char(const device char* In1[[buffer(0)]],
                            device char* Out[[buffer(1)]],
                            uint tid [[thread_position_in_grid]]){
    Out[tid] = sqrt(In1[tid]);
}

kernel void functional_sqrt_unsigned_char(const device unsigned char* In1[[buffer(0)]],
                            device unsigned char* Out[[buffer(1)]],
                            uint tid [[thread_position_in_grid]]){
    Out[tid] = sqrt(In1[tid]);
}

kernel void functional_sqrt_short(const device short* In1[[buffer(0)]],
                            device short* Out[[buffer(1)]],
                            uint tid [[thread_position_in_grid]]){
    Out[tid] = sqrt(In1[tid]);
}

kernel void functional_sqrt_unsigned_short(const device unsigned short* In1[[buffer(0)]],
                            device unsigned short* Out[[buffer(1)]],
                            uint tid [[thread_position_in_grid]]){
    Out[tid] = sqrt(In1[tid]);
}

kernel void functional_sqrt_ushort(const device ushort* In1[[buffer(0)]],
                            device ushort* Out[[buffer(1)]],
                            uint tid [[thread_position_in_grid]]){
    Out[tid] = sqrt(In1[tid]);
}

kernel void functional_sqrt_int(const device int* In1[[buffer(0)]],
                            device int* Out[[buffer(1)]],
                            uint tid [[thread_position_in_grid]]){
    Out[tid] = sqrt(In1[tid]);
}

kernel void functional_sqrt_unsigned_int(const device unsigned int* In1[[buffer(0)]],
                            device unsigned int* Out[[buffer(1)]],
                            uint tid [[thread_position_in_grid]]){
    Out[tid] = sqrt(In1[tid]);
}

kernel void functional_sqrt_uint(const device uint* In1[[buffer(0)]],
                            device uint* Out[[buffer(1)]],
                            uint tid [[thread_position_in_grid]]){
    Out[tid] = sqrt(In1[tid]);
}
*/
kernel void functional_sqrt_float(const device float* In1[[buffer(0)]],
                            device float* Out[[buffer(1)]],
                            uint tid [[thread_position_in_grid]]){
    Out[tid] = sqrt(In1[tid]);
}


/*
 All the fills start here!
 */


kernel void functional_fill_char(const device char* In[[buffer(0)]],
                                  device char* Out[[buffer(1)]],
                                  uint tid[[thread_position_in_grid]]){
    Out[tid] = In[0];
}

kernel void functional_fill_unsigned_char(const device unsigned char* In[[buffer(0)]],
                                  device unsigned char* Out[[buffer(1)]],
                                  uint tid[[thread_position_in_grid]]){
    Out[tid] = In[0];
}

kernel void functional_fill_short(const device short* In[[buffer(0)]],
                                  device short* Out[[buffer(1)]],
                                  uint tid[[thread_position_in_grid]]){
    Out[tid] = In[0];
}

kernel void functional_fill_unsigned_short(const device unsigned short* In[[buffer(0)]],
                                  device unsigned short* Out[[buffer(1)]],
                                  uint tid[[thread_position_in_grid]]){
    Out[tid] = In[0];
}

kernel void functional_fill_ushort(const device ushort* In[[buffer(0)]],
                                  device ushort* Out[[buffer(1)]],
                                  uint tid[[thread_position_in_grid]]){
    Out[tid] = In[0];
}

kernel void functional_fill_unsigned_int(const device unsigned int* In[[buffer(0)]],
                                  device unsigned int* Out[[buffer(1)]],
                                  uint tid[[thread_position_in_grid]]){
    Out[tid] = In[0];
}

kernel void functional_fill_uint(const device uint* In[[buffer(0)]],
                                  device uint* Out[[buffer(1)]],
                                  uint tid[[thread_position_in_grid]]){
    Out[tid] = In[0];
}

kernel void functional_fill_int(const device int* In[[buffer(0)]],
                                device int* Out[[buffer(1)]],
                                uint tid[[thread_position_in_grid]]){
    Out[tid] = In[0];
}

kernel void functional_fill_float(const device float* In[[buffer(0)]],
                                  device float* Out[[buffer(1)]],
                                  uint tid[[thread_position_in_grid]]){
    Out[tid] = In[0];
}


/*
 All sequence start here!
*/

kernel void functional_seq_char(device char* Out[[buffer(0)]],
                                device char* Init[[buffer(1)]],
                                device char* Step[[buffer(2)]],
                                uint tid [[thread_position_in_grid]]){
    Out[tid] = tid * Step[0] + Init[0];
}

kernel void functional_seq_unsigned_char(device unsigned char* Out[[buffer(0)]],
                                         device unsigned char* Init[[buffer(1)]],
                                         device unsigned char* Step[[buffer(2)]],
                                         uint tid [[thread_position_in_grid]]){
    Out[tid] = tid * Step[0] + Init[0];
}

kernel void functional_seq_short(device short* Out[[buffer(0)]],
                                 device short* Init[[buffer(1)]],
                                 device short* Step[[buffer(2)]],
                                 uint tid [[thread_position_in_grid]]){
    Out[tid] = tid * Step[0] + Init[0];
}

kernel void functional_seq_unsigned_short(device unsigned short* Out[[buffer(0)]],
                                          device unsigned short* Init[[buffer(1)]],
                                          device unsigned short* Step[[buffer(2)]],
                                          uint tid [[thread_position_in_grid]]){
    Out[tid] = tid * Step[0] + Init[0];
}

kernel void functional_seq_ushort(device ushort* Out[[buffer(0)]],
                                  device ushort* Init[[buffer(1)]],
                                  device ushort* Step[[buffer(2)]],
                                  uint tid [[thread_position_in_grid]]){
    Out[tid] = tid * Step[0] + Init[0];
}

kernel void functional_seq_int(device int* Out[[buffer(0)]],
                               device int* Init[[buffer(1)]],
                               device int* Step[[buffer(2)]],
                               uint tid [[thread_position_in_grid]]){
    Out[tid] = tid * Step[0] + Init[0];
}

kernel void functional_seq_unsigned_int(device unsigned int* Out[[buffer(0)]],
                                        device unsigned int* Init[[buffer(1)]],
                                        device unsigned int* Step[[buffer(2)]],
                                        uint tid [[thread_position_in_grid]]){
    Out[tid] = tid * Step[0] + Init[0];
}

kernel void functional_seq_uint(device uint* Out[[buffer(0)]],
                                device uint* Init[[buffer(1)]],
                                device uint* Step[[buffer(2)]],
                                uint tid [[thread_position_in_grid]]){
    Out[tid] = tid * Step[0] + Init[0];
}

kernel void functional_seq_float(device float* Out[[buffer(0)]],
                                 device float* Init[[buffer(1)]],
                                 device float* Step[[buffer(2)]],
                                 uint tid [[thread_position_in_grid]]){
    Out[tid] = tid * Step[0] + Init[0];
}

/*
 All replace start here!
*/

kernel void functional_replace_char(device char* Out[[buffer(0)]],
                               device char* key[[buffer(1)]],
                                device char* value[[buffer(2)]],
                                uint tid [[thread_position_in_grid]]){
    if(Out[tid] == key[0]){
        Out[tid] = value[0];
    }
}
                     
kernel void functional_replace_unsigned_char(device unsigned char* Out[[buffer(0)]],
                               device unsigned char* key[[buffer(1)]],
                            device unsigned char* value[[buffer(2)]],
                            uint tid [[thread_position_in_grid]]){
    if(Out[tid] == key[0]){
        Out[tid] = value[0];
    }
}
                              
kernel void functional_replace_short(device short* Out[[buffer(0)]],
                               device short* key[[buffer(1)]],
                               device short* value[[buffer(2)]],
                               uint tid [[thread_position_in_grid]]){
    if(Out[tid] == key[0]){
        Out[tid] = value[0];
    }
}
                              
kernel void functional_replace_unsigned_short(device unsigned short* Out[[buffer(0)]],
                               device unsigned short* key[[buffer(1)]],
                               device unsigned short* value[[buffer(2)]],
                               uint tid [[thread_position_in_grid]]){
    if(Out[tid] == key[0]){
        Out[tid] = value[0];
    }
}
                              
kernel void functional_replace_ushort(device ushort* Out[[buffer(0)]],
                               device ushort* key[[buffer(1)]],
                               device ushort* value[[buffer(2)]],
                               uint tid [[thread_position_in_grid]]){
    if(Out[tid] == key[0]){
        Out[tid] = value[0];
    }
}
                              
kernel void functional_replace_int(device int* Out[[buffer(0)]],
                               device int* key[[buffer(1)]],
                               device int* value[[buffer(2)]],
                               uint tid [[thread_position_in_grid]]){
    if(Out[tid] == key[0]){
        Out[tid] = value[0];
    }
}
                              
kernel void functional_replace_unsigned_int(device unsigned int* Out[[buffer(0)]],
                               device unsigned int* key[[buffer(1)]],
                               device unsigned int* value[[buffer(2)]],
                               uint tid [[thread_position_in_grid]]){
    if(Out[tid] == key[0]){
        Out[tid] = value[0];
    }
}
                              
kernel void functional_replace_uint(device uint* Out[[buffer(0)]],
                               device uint* key[[buffer(1)]],
                               device uint* value[[buffer(2)]],
                               uint tid [[thread_position_in_grid]]){
    if(Out[tid] == key[0]){
        Out[tid] = value[0];
    }
}

kernel void functional_replace_float(device float* Out[[buffer(0)]],
                               device float* key[[buffer(1)]],
                               device float* value[[buffer(2)]],
                               uint tid [[thread_position_in_grid]]){
    if(Out[tid] == key[0]){
        Out[tid] = value[0];
    }
}
                              
/*
 Replace Copy Here!!
*/
                                                         
kernel void functional_replace_copy_char(device char* In[[buffer(0)]],
                                         device char* Out[[buffer(1)]],
                                         device char* key[[buffer(2)]],
                                         device char* value[[buffer(3)]],
                                         uint tid [[thread_position_in_grid]]){
    if(In[tid] == key[0]){
        Out[tid] = value[0];
    } else {
        Out[tid] = In[tid];
    }
}
                                                         
kernel void functional_replace_copy_unsigned_char(device unsigned char* In[[buffer(0)]],
                                                  device unsigned char* Out[[buffer(1)]],
                                                  device unsigned char* key[[buffer(2)]],
                                                  device unsigned char* value[[buffer(3)]],
                                                  uint tid [[thread_position_in_grid]]){
    if(In[tid] == key[0]){
        Out[tid] = value[0];
    } else {
        Out[tid] = In[tid];
    }
}
                                                         
kernel void functional_replace_copy_short(device short* In[[buffer(0)]],
                                          device short* Out[[buffer(1)]],
                                          device short* key[[buffer(2)]],
                                          device short* value[[buffer(3)]],
                                          uint tid [[thread_position_in_grid]]){
    if(In[tid] == key[0]){
        Out[tid] = value[0];
    } else {
        Out[tid] = In[tid];
    }
}
                                                         
kernel void functional_replace_copy_unsigned_short(device unsigned short* In[[buffer(0)]],
                                                   device unsigned short* Out[[buffer(1)]],
                                                   device unsigned short* key[[buffer(2)]],
                                                   device unsigned short* value[[buffer(3)]],
                                                   uint tid [[thread_position_in_grid]]){
    if(In[tid] == key[0]){
        Out[tid] = value[0];
    } else {
        Out[tid] = In[tid];
    }
}
                                                         
kernel void functional_replace_copy_ushort(device ushort* In[[buffer(0)]],
                                           device ushort* Out[[buffer(1)]],
                                           device ushort* key[[buffer(2)]],
                                           device ushort* value[[buffer(3)]],
                                           uint tid [[thread_position_in_grid]]){
    if(In[tid] == key[0]){
        Out[tid] = value[0];
    } else {
        Out[tid] = In[tid];
    }
}
                                                         
kernel void functional_replace_copy_int(device int* In[[buffer(0)]],
                                        device int* Out[[buffer(1)]],
                                        device int* key[[buffer(2)]],
                                        device int* value[[buffer(3)]],
                                        uint tid [[thread_position_in_grid]]){
    if(In[tid] == key[0]){
        Out[tid] = value[0];
    } else {
        Out[tid] = In[tid];
    }
}
                                                         
kernel void functional_replace_copy_unsigned_int(device unsigned int* In[[buffer(0)]],
                                                 device unsigned int* Out[[buffer(1)]],
                                                 device unsigned int* key[[buffer(2)]],
                                                 device unsigned int* value[[buffer(3)]],
                                                 uint tid [[thread_position_in_grid]]){
    if(In[tid] == key[0]){
        Out[tid] = value[0];
    } else {
        Out[tid] = In[tid];
    }
}
                                                         
kernel void functional_replace_copy_uint(device uint* In[[buffer(0)]],
                                         device uint* Out[[buffer(1)]],
                                         device uint* key[[buffer(2)]],
                                         device uint* value[[buffer(3)]],
                                         uint tid [[thread_position_in_grid]]){
    if(In[tid] == key[0]){
        Out[tid] = value[0];
    } else {
        Out[tid] = In[tid];
    }
}
                                                         
kernel void functional_replace_copy_float(device float* In[[buffer(0)]],
                                          device float* Out[[buffer(1)]],
                                          device float* key[[buffer(2)]],
                                          device float* value[[buffer(3)]],
                                          uint tid [[thread_position_in_grid]]){
    if(In[tid] == key[0]){
        Out[tid] = value[0];
    } else {
        Out[tid] = In[tid];
    }
}


/*
 All find here!!
 Still needs work!!
*/
kernel void functional_find_char(device char* In[[buffer(0)]],
                                 device int* Out[[buffer(1)]],
                                 device char* key[[buffer(2)]],
                                 device int* Num[[buffer(3)]],
                                 uint tid [[thread_position_in_grid]]){
    for(int i = 0; i< Num[0]; i++){
        if(In[i+Num[0]*tid] == key[0]){
            Out[tid] = tid;
            break;
        } else {
            Out[tid] = -1;
        }
    }
}
                            
kernel void functional_find_unsigned_char(device unsigned char* In[[buffer(0)]],
                                          device int* Out[[buffer(1)]],
                                          device unsigned char* key[[buffer(2)]],
                                          device int* Num[[buffer(3)]],
                                          uint tid [[thread_position_in_grid]]){
    for(int i = 0; i< Num[0]; i++){
        if(In[i+Num[0]*tid] == key[0]){
            Out[tid] = tid;
            break;
        } else {
            Out[tid] = -1;
        }
    }
}

kernel void functional_find_short(device short* In[[buffer(0)]],
                            device int* Out[[buffer(1)]],
                            device short* key[[buffer(2)]],
                            device int* Num[[buffer(3)]],
                            uint tid [[thread_position_in_grid]]){
    for(int i = 0; i< Num[0]; i++){
        if(In[i+Num[0]*tid] == key[0]){
            Out[tid] = tid;
            break;
        } else {
            Out[tid] = -1;
        }
    }  
}
                            
kernel void functional_find_unsigned_short(device unsigned short* In[[buffer(0)]],
                            device int* Out[[buffer(1)]],
                            device unsigned short* key[[buffer(2)]],
                            device int* Num[[buffer(3)]],
                            uint tid [[thread_position_in_grid]]){
    for(int i = 0; i< Num[0]; i++){
        if(In[i+Num[0]*tid] == key[0]){
            Out[tid] = tid;
            break;
        } else {
            Out[tid] = -1;
        }
    }
}
                            
kernel void functional_find_ushort(device ushort* In[[buffer(0)]],
                            device int* Out[[buffer(1)]],
                            device ushort* key[[buffer(2)]],
                            device int* Num[[buffer(3)]],
                            uint tid [[thread_position_in_grid]]){
    for(int i = 0; i< Num[0]; i++){
        if(In[i+Num[0]*tid] == key[0]){
            Out[tid] = tid;
            break;
        } else {
            Out[tid] = -1;
        }
    }  
}
                            
kernel void functional_find_int(device int* In[[buffer(0)]],
                            device int* Out[[buffer(1)]],
                            device int* key[[buffer(2)]],
                            device int* Num[[buffer(3)]],
                            uint tid [[thread_position_in_grid]]){
    for(int i = 0; i< Num[0]; i++){
        if(In[i+Num[0]*tid] == key[0]){
            Out[tid] = tid;
            break;
        } else {
            Out[tid] = -1;
        }
    }  
}
                            
kernel void functional_find_unsigned_int(device unsigned int* In[[buffer(0)]],
                            device int* Out[[buffer(1)]],
                            device unsigned int* key[[buffer(2)]],
                            device int* Num[[buffer(3)]],
                            uint tid [[thread_position_in_grid]]){
    for(int i = 0; i< Num[0]; i++){
        if(In[i+Num[0]*tid] == key[0]){
            Out[tid] = tid;
            break;
        } else {
            Out[tid] = -1;
        }
    }  
}
                            
kernel void functional_find_uint(device uint* In[[buffer(0)]],
                            device int* Out[[buffer(1)]],
                            device uint* key[[buffer(2)]],
                            device int* Num[[buffer(3)]],
                            uint tid [[thread_position_in_grid]]){
    for(int i = 0; i< Num[0]; i++){
        if(In[i+Num[0]*tid] == key[0]){
            Out[tid] = tid;
            break;
        } else {
            Out[tid] = -1;
        }
    }  
}
                            
kernel void functional_find_float(device float* In[[buffer(0)]],
                            device int* Out[[buffer(1)]],
                            device float* key[[buffer(2)]],
                            device int* Num[[buffer(3)]],
                            uint tid [[thread_position_in_grid]]){
    for(int i = 0; i< Num[0]; i++){
        if(In[i+Num[0]*tid] == key[0]){
            Out[tid] = tid;
            break;
        } else {
            Out[tid] = -1;
        }
    }  
}
                            


