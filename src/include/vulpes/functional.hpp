//
//  functional.hpp
//
//  Created by Aditya Atluri on 7/5/15.
//  Copyright © 2015 Aditya Atluri. All rights reserved.
//

#ifndef functional_hpp
#define functional_hpp

#include "vulpes.hpp"

namespace vulpes{
    class functional{
    private:
        std::string Src;
        std::string Name;
    public:
        functional(std::string _src,
                   std::string _name):Src(_src), Name(_name){
        }
        std::string get_source(){
            return Src;
        }
        std::string  get_name(){
            return Name;
        }
    };
    
    template<typename T>
    functional plus(){
        std::string src = "#include<metal_stdlib>\n using namespace metal;\n";
        std::string name = "functional_plus";
        if(std::is_same<T, char>::value){
            src += "kernel void functional_plus(const device char* In1[[buffer(0)]], \n \
                                                    const device char* In2[[buffer(1)]], \n \
                                                    device char* Out[[buffer(2)]], \n \
                                                    uint tid [[thread_position_in_grid]]){ \n \
                                     Out[tid] = In1[tid] + In2[tid]; \n \
        }";
        }
        if(std::is_same<T, unsigned char>::value){
            src += "kernel void functional_plus(const device unsigned char* In1[[buffer(0)]], \n \
                                                             const device unsigned char* In2[[buffer(1)]], \n \
                                                             device unsigned char* Out[[buffer(2)]], \n \
                                                             uint tid [[thread_position_in_grid]]){ \n \
                                     Out[tid] = In1[tid] + In2[tid]; \n \
        }";
        }
        if(std::is_same<T, short>::value){
            src += "kernel void functional_plus(const device short* In1[[buffer(0)]], \n \
                                                             const device short* In2[[buffer(1)]], \n \
                                                             device short* Out[[buffer(2)]], \n \
                                                             uint tid [[thread_position_in_grid]]){ \n \
                                     Out[tid] = In1[tid] + In2[tid]; \n \
        }";
        }
        if(std::is_same<T, unsigned short>::value){
            src += "kernel void functional_plus(const device unsigned short* In1[[buffer(0)]], \n \
                                                             const device unsigned short* In2[[buffer(1)]], \n \
                                                             device unsigned short* Out[[buffer(2)]], \n \
                                                             uint tid [[thread_position_in_grid]]){ \n \
                                     Out[tid] = In1[tid] + In2[tid]; \n \
        }";
        }
        if(std::is_same<T, ushort>::value){
            src += "kernel void functional_plus(const device ushort* In1[[buffer(0)]], \n \
                                                             const device ushort* In2[[buffer(1)]], \n \
                                                             device ushort* Out[[buffer(2)]], \n \
                                                             uint tid [[thread_position_in_grid]]){ \n \
                                     Out[tid] = In1[tid] + In2[tid]; \n \
        }";
        }
        if(std::is_same<T, int>::value){
            src += "kernel void functional_plus(const device int* In1[[buffer(0)]], \n\
                                                             const device int* In2[[buffer(1)]], \n \
                                                             device int* Out[[buffer(2)]], \n \
                                                             uint tid [[thread_position_in_grid]]){ \n \
                                     Out[tid] = In1[tid] + In2[tid]; \n \
        }";
        }
        if(std::is_same<T, unsigned int>::value){
            src += "kernel void functional_plus(const device unsigned int* In1[[buffer(0)]], \n \
                                                             const device unsigned int* In2[[buffer(1)]], \n \
                                                             device unsigned int* Out[[buffer(2)]], \n \
                                                             uint tid [[thread_position_in_grid]]){ \n \
                                     Out[tid] = In1[tid] + In2[tid]; \n \
        }";
        }
        if(std::is_same<T, uint>::value){
            src += "kernel void functional_plus(const device uint* In1[[buffer(0)]], \n \
                                                             const device uint* In2[[buffer(1)]], \n \
                                                             device uint* Out[[buffer(2)]], \n \
                                                             uint tid [[thread_position_in_grid]]){ \n \
                                     Out[tid] = In1[tid] + In2[tid]; \n \
        }";
        }
        if(std::is_same<T, float>::value){
            src += "kernel void functional_plus(const device float* In1[[buffer(0)]], \n \
                                                             const device float* In2[[buffer(1)]], \n \
                                                             device float* Out[[buffer(2)]], \n \
                                                             uint tid [[thread_position_in_grid]]){ \n \
                                     Out[tid] = In1[tid] + In2[tid]; \n \
        }";
        }
        if(std::is_same<T, size_t>::value){
            src += "kernel void functional_plus(const device size_t* In1[[buffer(0)]], \n \
                                                             const device size_t* In2[[buffer(1)]], \n \
                                                             device size_t* Out[[buffer(2)]], \n \
                                                             uint tid [[thread_position_in_grid]]){ \n \
                                    Out[tid] = In1[tid] + In2[tid]; \n \
        }";
        }
        if(std::is_same<T, ptrdiff_t>::value){
            src += "kernel void functional_plus(const device ptrdiff_t* In1[buffer(0)]], \n \
                                                             const device ptrdiff_t* In2[[buffer(1)]], \n \
                                                             device ptrdiff_t* Out[[buffer(2)]], \n \
                                                             uint tid [[thread_position_in_grid]]){ \n \
                                     Out[tid] = In1[tid] + In2[tid]; \n \
        }";
        }
        functional _functional(src, name);
        return _functional;
    }
    
    template<typename T>
    functional minus(){
        std::string src = "#include<metal_stdlib>\n using namespace metal;\n";
        std::string name = "functional_minus";
        if(std::is_same<T, char>::value){
            src += "kernel void functional_minus(const device char* In1[[buffer(0)]], \n \
                                                const device char* In2[[buffer(1)]], \n \
                                                device char* Out[[buffer(2)]], \n \
                                                uint tid [[thread_position_in_grid]]){ \n \
                                    Out[tid] = In1[tid] - In2[tid]; \n \
            }";
        }
        if(std::is_same<T, unsigned char>::value){
            src += "kernel void functional_minus(const device unsigned char* In1[[buffer(0)]], \n \
                                                const device unsigned char* In2[[buffer(1)]], \n \
                                                device unsigned char* Out[[buffer(2)]], \n \
                                                uint tid [[thread_position_in_grid]]){ \n \
                                    Out[tid] = In1[tid] - In2[tid]; \n \
            }";
        }
        if(std::is_same<T, short>::value){
            src += "kernel void functional_minus(const device short* In1[[buffer(0)]], \n \
                                                const device short* In2[[buffer(1)]], \n \
                                                device short* Out[[buffer(2)]], \n \
                                                uint tid [[thread_position_in_grid]]){ \n \
                                    Out[tid] = In1[tid] - In2[tid]; \n \
            }";
        }
        if(std::is_same<T, unsigned short>::value){
            src += "kernel void functional_minus(const device unsigned short* In1[[buffer(0)]], \n \
                                                const device unsigned short* In2[[buffer(1)]], \n \
                                                device unsigned short* Out[[buffer(2)]], \n \
                                                uint tid [[thread_position_in_grid]]){ \n \
                                    Out[tid] = In1[tid] - In2[tid]; \n \
            }";
        }
        if(std::is_same<T, ushort>::value){
            src += "kernel void functional_minus(const device ushort* In1[[buffer(0)]], \n \
                                                const device ushort* In2[[buffer(1)]], \n \
                                                device ushort* Out[[buffer(2)]], \n \
                                                uint tid [[thread_position_in_grid]]){ \n \
                                    Out[tid] = In1[tid] - In2[tid]; \n \
            }";
        }
        if(std::is_same<T, int>::value){
            src += "kernel void functional_minus(const device int* In1[[buffer(0)]], \n\
                                                const device int* In2[[buffer(1)]], \n \
                                                device int* Out[[buffer(2)]], \n \
                                                uint tid [[thread_position_in_grid]]){ \n \
                                    Out[tid] = In1[tid] - In2[tid]; \n \
            }";
        }
        if(std::is_same<T, unsigned int>::value){
            src += "kernel void functional_minus(const device unsigned int* In1[[buffer(0)]], \n \
                                                const device unsigned int* In2[[buffer(1)]], \n \
                                                device unsigned int* Out[[buffer(2)]], \n \
                                                uint tid [[thread_position_in_grid]]){ \n \
                                    Out[tid] = In1[tid] - In2[tid]; \n \
            }";
        }
        if(std::is_same<T, uint>::value){
            src += "kernel void functional_minus(const device uint* In1[[buffer(0)]], \n \
                                                const device uint* In2[[buffer(1)]], \n \
                                                device uint* Out[[buffer(2)]], \n \
                                                uint tid [[thread_position_in_grid]]){ \n \
                                    Out[tid] = In1[tid] - In2[tid]; \n \
            }";
        }
        if(std::is_same<T, float>::value){
            src += "kernel void functional_minus(const device float* In1[[buffer(0)]], \n \
                                                const device float* In2[[buffer(1)]], \n \
                                                device float* Out[[buffer(2)]], \n \
                                                uint tid [[thread_position_in_grid]]){ \n \
                                    Out[tid] = In1[tid] - In2[tid]; \n \
            }";
        }
        if(std::is_same<T, size_t>::value){
            src += "kernel void functional_minus(const device size_t* In1[[buffer(0)]], \n \
                                                const device size_t* In2[[buffer(1)]], \n \
                                                device size_t* Out[[buffer(2)]], \n \
                                                uint tid [[thread_position_in_grid]]){ \n \
                                    Out[tid] = In1[tid] - In2[tid]; \n \
            }";
        }
        if(std::is_same<T, ptrdiff_t>::value){
            src += "kernel void functional_minus(const device ptrdiff_t* In1[buffer(0)]], \n \
                                                const device ptrdiff_t* In2[[buffer(1)]], \n \
                                                device ptrdiff_t* Out[[buffer(2)]], \n \
                                                uint tid [[thread_position_in_grid]]){ \n \
                                    Out[tid] = In1[tid] - In2[tid]; \n \
            }";
        }
        functional _functional(src, name);
        return _functional;
    }
    
    template<typename T>
    functional multiplies(){
        std::string src = "#include<metal_stdlib>\n using namespace metal;\n";
        std::string name = "functional_multiplies";
        if(std::is_same<T, char>::value){
            src += "kernel void functional_multiplies(const device char* In1[[buffer(0)]], \n \
            const device char* In2[[buffer(1)]], \n \
            device char* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] * In2[tid]; \n \
            }";
        }
        if(std::is_same<T, unsigned char>::value){
            src += "kernel void functional_multiplies(const device unsigned char* In1[[buffer(0)]], \n \
            const device unsigned char* In2[[buffer(1)]], \n \
            device unsigned char* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] * In2[tid]; \n \
            }";
        }
        if(std::is_same<T, short>::value){
            src += "kernel void functional_multiplies(const device short* In1[[buffer(0)]], \n \
            const device short* In2[[buffer(1)]], \n \
            device short* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] * In2[tid]; \n \
            }";
        }
        if(std::is_same<T, unsigned short>::value){
            src += "kernel void functional_multiplies(const device unsigned short* In1[[buffer(0)]], \n \
            const device unsigned short* In2[[buffer(1)]], \n \
            device unsigned short* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] * In2[tid]; \n \
            }";
        }
        if(std::is_same<T, ushort>::value){
            src += "kernel void functional_multiplies(const device ushort* In1[[buffer(0)]], \n \
            const device ushort* In2[[buffer(1)]], \n \
            device ushort* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] * In2[tid]; \n \
            }";
        }
        if(std::is_same<T, int>::value){
            src += "kernel void functional_multiplies(const device int* In1[[buffer(0)]], \n\
            const device int* In2[[buffer(1)]], \n \
            device int* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] * In2[tid]; \n \
            }";
        }
        if(std::is_same<T, unsigned int>::value){
            src += "kernel void functional_multiplies(const device unsigned int* In1[[buffer(0)]], \n \
            const device unsigned int* In2[[buffer(1)]], \n \
            device unsigned int* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] * In2[tid]; \n \
            }";
        }
        if(std::is_same<T, uint>::value){
            src += "kernel void functional_multiplies(const device uint* In1[[buffer(0)]], \n \
            const device uint* In2[[buffer(1)]], \n \
            device uint* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] * In2[tid]; \n \
            }";
        }
        if(std::is_same<T, float>::value){
            src += "kernel void functional_multiplies(const device float* In1[[buffer(0)]], \n \
            const device float* In2[[buffer(1)]], \n \
            device float* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] * In2[tid]; \n \
            }";
        }
        if(std::is_same<T, size_t>::value){
            src += "kernel void functional_multiplies(const device size_t* In1[[buffer(0)]], \n \
            const device size_t* In2[[buffer(1)]], \n \
            device size_t* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] * In2[tid]; \n \
            }";
        }
        if(std::is_same<T, ptrdiff_t>::value){
            src += "kernel void functional_multiplies(const device ptrdiff_t* In1[buffer(0)]], \n \
            const device ptrdiff_t* In2[[buffer(1)]], \n \
            device ptrdiff_t* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] * In2[tid]; \n \
            }";
        }
        functional _functional(src, name);
        return _functional;
    }

    template<typename T>
    functional divides(){
        std::string src = "#include<metal_stdlib>\n using namespace metal;\n";
        std::string name = "functional_divides";
        if(std::is_same<T, char>::value){
            src += "kernel void functional_divides(const device char* In1[[buffer(0)]], \n \
            const device char* In2[[buffer(1)]], \n \
            device char* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] / In2[tid]; \n \
            }";
        }
        if(std::is_same<T, unsigned char>::value){
            src += "kernel void functional_divides(const device unsigned char* In1[[buffer(0)]], \n \
            const device unsigned char* In2[[buffer(1)]], \n \
            device unsigned char* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] / In2[tid]; \n \
            }";
        }
        if(std::is_same<T, short>::value){
            src += "kernel void functional_divides(const device short* In1[[buffer(0)]], \n \
            const device short* In2[[buffer(1)]], \n \
            device short* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] / In2[tid]; \n \
            }";
        }
        if(std::is_same<T, unsigned short>::value){
            src += "kernel void functional_divides(const device unsigned short* In1[[buffer(0)]], \n \
            const device unsigned short* In2[[buffer(1)]], \n \
            device unsigned short* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] / In2[tid]; \n \
            }";
        }
        if(std::is_same<T, ushort>::value){
            src += "kernel void functional_divides(const device ushort* In1[[buffer(0)]], \n \
            const device ushort* In2[[buffer(1)]], \n \
            device ushort* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] / In2[tid]; \n \
            }";
        }
        if(std::is_same<T, int>::value){
            src += "kernel void functional_divides(const device int* In1[[buffer(0)]], \n\
            const device int* In2[[buffer(1)]], \n \
            device int* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] / In2[tid]; \n \
            }";
        }
        if(std::is_same<T, unsigned int>::value){
            src += "kernel void functional_divides(const device unsigned int* In1[[buffer(0)]], \n \
            const device unsigned int* In2[[buffer(1)]], \n \
            device unsigned int* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] / In2[tid]; \n \
            }";
        }
        if(std::is_same<T, uint>::value){
            src += "kernel void functional_divides(const device uint* In1[[buffer(0)]], \n \
            const device uint* In2[[buffer(1)]], \n \
            device uint* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] / In2[tid]; \n \
            }";
        }
        if(std::is_same<T, float>::value){
            src += "kernel void functional_divides(const device float* In1[[buffer(0)]], \n \
            const device float* In2[[buffer(1)]], \n \
            device float* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] / In2[tid]; \n \
            }";
        }
        if(std::is_same<T, size_t>::value){
            src += "kernel void functional_divides(const device size_t* In1[[buffer(0)]], \n \
            const device size_t* In2[[buffer(1)]], \n \
            device size_t* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] / In2[tid]; \n \
            }";
        }
        if(std::is_same<T, ptrdiff_t>::value){
            src += "kernel void functional_divides(const device ptrdiff_t* In1[buffer(0)]], \n \
            const device ptrdiff_t* In2[[buffer(1)]], \n \
            device ptrdiff_t* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] / In2[tid]; \n \
            }";
        }
        functional _functional(src, name);
        return _functional;
    }
    
    template<typename T>
    functional modulus(){
        std::string src = "#include<metal_stdlib>\n using namespace metal;\n";
        std::string name = "functional_modulus";
        if(std::is_same<T, char>::value){
            src += "kernel void functional_modulus(const device char* In1[[buffer(0)]], \n \
            const device char* In2[[buffer(1)]], \n \
            device char* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] % In2[tid]; \n \
            }";
        }
        if(std::is_same<T, unsigned char>::value){
            src += "kernel void functional_modulus(const device unsigned char* In1[[buffer(0)]], \n \
            const device unsigned char* In2[[buffer(1)]], \n \
            device unsigned char* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] % In2[tid]; \n \
            }";
        }
        if(std::is_same<T, short>::value){
            src += "kernel void functional_modulus(const device short* In1[[buffer(0)]], \n \
            const device short* In2[[buffer(1)]], \n \
            device short* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] % In2[tid]; \n \
            }";
        }
        if(std::is_same<T, unsigned short>::value){
            src += "kernel void functional_modulus(const device unsigned short* In1[[buffer(0)]], \n \
            const device unsigned short* In2[[buffer(1)]], \n \
            device unsigned short* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] % In2[tid]; \n \
            }";
        }
        if(std::is_same<T, ushort>::value){
            src += "kernel void functional_modulus(const device ushort* In1[[buffer(0)]], \n \
            const device ushort* In2[[buffer(1)]], \n \
            device ushort* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] % In2[tid]; \n \
            }";
        }
        if(std::is_same<T, int>::value){
            src += "kernel void functional_modulus(const device int* In1[[buffer(0)]], \n\
            const device int* In2[[buffer(1)]], \n \
            device int* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] % In2[tid]; \n \
            }";
        }
        if(std::is_same<T, unsigned int>::value){
            src += "kernel void functional_modulus(const device unsigned int* In1[[buffer(0)]], \n \
            const device unsigned int* In2[[buffer(1)]], \n \
            device unsigned int* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] % In2[tid]; \n \
            }";
        }
        if(std::is_same<T, uint>::value){
            src += "kernel void functional_modulus(const device uint* In1[[buffer(0)]], \n \
            const device uint* In2[[buffer(1)]], \n \
            device uint* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] % In2[tid]; \n \
            }";
        }
        if(std::is_same<T, size_t>::value){
            src += "kernel void functional_modulus(const device size_t* In1[[buffer(0)]], \n \
            const device size_t* In2[[buffer(1)]], \n \
            device size_t* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] % In2[tid]; \n \
            }";
        }
        if(std::is_same<T, ptrdiff_t>::value){
            src += "kernel void functional_modulus(const device ptrdiff_t* In1[buffer(0)]], \n \
            const device ptrdiff_t* In2[[buffer(1)]], \n \
            device ptrdiff_t* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] % In2[tid]; \n \
            }";
        }
        functional _functional(src, name);
        return _functional;
    }
    
    template<typename T>
    functional negate(){
        std::string src = "#include<metal_stdlib>\n using namespace metal;\n";
        std::string name = "functional_negate";
        if(std::is_same<T, char>::value){
            src += "kernel void functional_negate(const device char* In1[[buffer(0)]], \n \
            device char* Out[[buffer(1)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = - In1[tid]; \n \
            }";
        }
        if(std::is_same<T, short>::value){
            src += "kernel void functional_negate(const device short* In1[[buffer(0)]], \n \
            const device short* Out[[buffer(1)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = - In1[tid]; \n \
            }";
        }
        if(std::is_same<T, int>::value){
            src += "kernel void functional_negate(const device int* In1[[buffer(0)]], \n\
            device int* Out[[buffer(1)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = - In1[tid]; \n \
            }";
        }
        if(std::is_same<T, float>::value){
            src += "kernel void functional_negate(const device float* In1[[buffer(0)]], \n \
            device float* Out[[buffer(1)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = - In1[tid]; \n \
            }";
        }
        if(std::is_same<T, size_t>::value){
            src += "kernel void functional_negate(const device size_t* In1[[buffer(0)]], \n \
            device size_t* Out[[buffer(1)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = - In1[tid]; \n \
            }";
        }
        if(std::is_same<T, ptrdiff_t>::value){
            src += "kernel void functional_negate(const device ptrdiff_t* In1[buffer(0)]], \n \
            device ptrdiff_t* Out[[buffer(1)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = - In1[tid]; \n \
            }";
        }
        functional _functional(src, name);
        return _functional;
    }
    
    // This is broken
    // TODO
    template<typename T>
    functional equal_to(){
        std::string src = "#include<metal_stdlib>\n using namespace metal;\n";
        std::string name = "functional_equal_to";
        if(std::is_same<T, char>::value){
            src += "kernel void functional_equal_to(const device char* In1[[buffer(0)]], \n \
            const device char* In2[[buffer(1)]], \n \
            device unsigned* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] == In2[tid]; \n \
            }";
        }
        if(std::is_same<T, unsigned char>::value){
            src += "kernel void functional_equal_to(const device unsigned char* In1[[buffer(0)]], \n \
            const device unsigned char* In2[[buffer(1)]], \n \
            device unsigned* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] == In2[tid]; \n \
            }";
        }
        if(std::is_same<T, short>::value){
            src += "kernel void functional_equal_to(const device short* In1[[buffer(0)]], \n \
            const device short* In2[[buffer(1)]], \n \
            device unsigned* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] == In2[tid]; \n \
            }";
        }
        if(std::is_same<T, unsigned short>::value){
            src += "kernel void functional_equal_to(const device unsigned short* In1[[buffer(0)]], \n \
            const device unsigned short* In2[[buffer(1)]], \n \
            device unsigned* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] == In2[tid]; \n \
            }";
        }
        if(std::is_same<T, ushort>::value){
            src += "kernel void functional_equal_to(const device ushort* In1[[buffer(0)]], \n \
            const device ushort* In2[[buffer(1)]], \n \
            device unsigned* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] == In2[tid]; \n \
            }";
        }
        if(std::is_same<T, int>::value){
            src += "kernel void functional_equal_to(const device int* In1[[buffer(0)]], \n\
            const device int* In2[[buffer(1)]], \n \
            device unsigned* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] == In2[tid]; \n \
            }";
        }
        if(std::is_same<T, unsigned int>::value){
            src += "kernel void functional_equal_to(const device unsigned int* In1[[buffer(0)]], \n \
            const device unsigned int* In2[[buffer(1)]], \n \
            device unsigned* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] == In2[tid]; \n \
            }";
        }
        if(std::is_same<T, uint>::value){
            src += "kernel void functional_equal_to(const device uint* In1[[buffer(0)]], \n \
            const device uint* In2[[buffer(1)]], \n \
            device unsigned* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] == In2[tid]; \n \
            }";
        }
        if(std::is_same<T, float>::value){
            src += "kernel void functional_equal_to(const device float* In1[[buffer(0)]], \n \
            const device float* In2[[buffer(1)]], \n \
            device unsigned* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] == In2[tid]; \n \
            }";
        }
        if(std::is_same<T, size_t>::value){
            src += "kernel void functional_equal_to(const device size_t* In1[[buffer(0)]], \n \
            const device size_t* In2[[buffer(1)]], \n \
            device unsigned* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[tid] == In2[tid]; \n \
            }";
        }
        if(std::is_same<T, ptrdiff_t>::value){
            src += "kernel void functional_equal_to(const device ptrdiff_t* In1[buffer(0)]], \n \
            const device ptrdiff_t* In2[[buffer(1)]], \n \
            device unsigned* Out[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = (In1[tid] == In2[tid]); \n \
            }";
        }
        functional _functional(src, name);
        return _functional;
    }
    
    
        template<typename T>
    functional get_fill(){
        std::string src = "#include<metal_stdlib>\n using namespace metal;\n";
        std::string name = "functional_fill";
        if(std::is_same<T, char>::value){
            src += "kernel void functional_fill(const device char* In1[[buffer(0)]], \n \
            device char* Out[[buffer(1)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[0]; \n \
            }";
        }
        if(std::is_same<T, unsigned char>::value){
            src += "kernel void functional_fill(const device unsigned char* In1[[buffer(0)]], \n \
            device unsigned char* Out[[buffer(1)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[0]; \n \
            }";
        }
        if(std::is_same<T, short>::value){
            src += "kernel void functional_fill(const device short* In1[[buffer(0)]], \n \
            device short* Out[[buffer(1)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[0]; \n \
            }";
        }
        if(std::is_same<T, unsigned short>::value){
            src += "kernel void functional_fill(const device unsigned short* In1[[buffer(0)]], \n \
            device unsigned short* Out[[buffer(1)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[0]; \n \
            }";
        }
        if(std::is_same<T, ushort>::value){
            src += "kernel void functional_fill(const device ushort* In1[[buffer(0)]], \n \
            device ushort* Out[[buffer(1)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[0]; \n \
            }";
        }
        if(std::is_same<T, int>::value){
            src += "kernel void functional_fill(const device int* In1[[buffer(0)]], \n\
            device int* Out[[buffer(1)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[0]; \n \
            }";
        }
        if(std::is_same<T, unsigned int>::value){
            src += "kernel void functional_fill(const device unsigned int* In1[[buffer(0)]], \n \
            device unsigned int* Out[[buffer(1)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[0]; \n \
            }";
        }
        if(std::is_same<T, uint>::value){
            src += "kernel void functional_fill(const device uint* In1[[buffer(0)]], \n \
            device uint* Out[[buffer(1)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[0]; \n \
            }";
        }
        if(std::is_same<T, float>::value){
            src += "kernel void functional_fill(const device float* In1[[buffer(0)]], \n \
            device float* Out[[buffer(1)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[0]; \n \
            }";
        }
        if(std::is_same<T, size_t>::value){
            src += "kernel void functional_fill(const device size_t* In1[[buffer(0)]], \n \
            device size_t* Out[[buffer(1)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[0]; \n \
            }";
        }
        if(std::is_same<T, ptrdiff_t>::value){
            src += "kernel void functional_fill(const device ptrdiff_t* In1[buffer(0)]], \n \
            device ptrdiff_t* Out[[buffer(1)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            Out[tid] = In1[0]; \n \
            }";
        }
        functional _functional(src, name);
        return _functional;
    }
    
        template<typename T>
    functional get_replace(){
        std::string src = "#include<metal_stdlib>\n using namespace metal;\n";
        std::string name = "functional_replace";
        if(std::is_same<T, char>::value){
            src += "kernel void functional_replace(device char* Out[[buffer(0)]], \n \
            device char* key[[buffer(1)], \n \
            device char* value[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            if(Out[tid] == key[0]){ \n \
            Out[tid] = value[0]; \n \
            } \n \
            }";
        }
        if(std::is_same<T, unsigned char>::value){
            src += "kernel void functional_replace(device unsigned char* Out[[buffer(0)]], \n \
            device unsigned char* key[[buffer(1)], \n \
            device unsigned char* value[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            if(Out[tid] == key[0]){ \n \
            Out[tid] = value[0]; \n \
            } \n \
            }";
        }
        if(std::is_same<T, short>::value){
            src += "kernel void functional_replace(device short* Out[[buffer(0)]], \n \
            device short* key[[buffer(1)]], \n \
            device short* value[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            if(Out[tid] == key[0]){ \n \
            Out[tid] = value[0]; \n \
            } \n \
            }";
        }
        if(std::is_same<T, unsigned short>::value){
            src += "kernel void functional_replace(device unsigned short* Out[[buffer(0)]], \n \
            device unsigned short* key[[buffer(1)]], \n \
            device unsigned short* value[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            if(Out[tid] == key[0]){ \n \
            Out[tid] = value[0]; \n \
            } \n \
            }";
        }
        if(std::is_same<T, ushort>::value){
            src += "kernel void functional_replace(device ushort* Out[[buffer(0)]], \n \
            device ushort* key[[buffer(1)]], \n \
            device ushort* value[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            if(Out[tid] == key[0]){ \n \
            Out[tid] = value[0]; \n \
            } \n \
            }";
        }
        if(std::is_same<T, int>::value){
            src += "kernel void functional_replace(device int* Out[[buffer(0)]], \n \
            device int* key[[buffer(1)]], \n \
            device int* value[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            if(Out[tid] == key[0]){ \n \
            Out[tid] = value[0]; \n \
            } \n \
            }";
        }
        if(std::is_same<T, unsigned int>::value){
            src += "kernel void functional_replace(device unsigned int* Out[[buffer(0)]], \n \
            device unsigned int* key[[buffer(1)]], \n \
            device unsigned int* value[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            if(Out[tid] == key[0]){ \n \
            Out[tid] = value[0]; \n \
            } \n \
            }";
        }
        if(std::is_same<T, uint>::value){
            src += "kernel void functional_replace(device uint* Out[[buffer(0)]], \n \
            device uint* key[[buffer(1)]], \n \
            device uint* value[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            if(Out[tid] == key[0]){ \n \
            Out[tid] = value[0]; \n \
            } \n \
            }";
        }
        if(std::is_same<T, float>::value){
            src += "kernel void functional_replace(device float* Out[[buffer(0)]], \n \
            device float* key[[buffer(1)]], \n \
            device float* value[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            if(Out[tid] == key[0]){ \n \
            Out[tid] = value[0]; \n \
            } \n \
            }";
        }
        if(std::is_same<T, size_t>::value){
            src += "kernel void functional_replace(device size_t* Out[[buffer(0)]], \n \
            device size_t* key[[buffer(1)]], \n \
            device size_t* value[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            if(Out[tid] == key[0]){ \n \
            Out[tid] = value[0]; \n \
            } \n \
            }";
        }
        if(std::is_same<T, ptrdiff_t>::value){
            src += "kernel void functional_replace(device ptrdiff_t* Out[[buffer(0)]], \n \
            device ptrdiff_t* key[[buffer(1)]], \n \
            device ptrdiff_t* value[[buffer(2)]], \n \
            uint tid [[thread_position_in_grid]]){ \n \
            if(Out[tid] == key[0]){ \n \
            Out[tid] = value[0]; \n \
            } \n \
            }";
        }
        functional _functional(src, name);
        return _functional;
    }
};



#endif /* functional_hpp */
