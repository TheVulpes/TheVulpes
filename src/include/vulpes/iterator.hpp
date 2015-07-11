//
//  Created by Aditya Atluri on 7/11/15.
//  Copyright © 2015 Aditya Atluri. All rights reserved.
//

#ifndef iterator_hpp
#define iterator_hpp

#include "device.hpp"
#include "vector.hpp"

namespace vulpes{
    class Iterator{
    private:
        id<MTLBuffer> buffer;
        __strong id<MTLBuffer> *bufptr;
        void* hostptr;
        size_t size;
        device _device;
        size_t T;
    public:
        Iterator(device __device,__strong id<MTLBuffer> *_buffer, void* _hostptr, size_t _T, size_t _size){
            buffer = *_buffer;
            bufptr = _buffer;
            hostptr = _hostptr;
            _device = __device;
            T = _T;
            size = _size;
        }
        Iterator(){}
        Iterator(size_t _size){size = _size;}
        Iterator(id<MTLBuffer> _buffer, size_t _size){
            size = _size;
            buffer = _buffer;
        }
        void set_device(device &__device){
            _device = __device;
        }
        void set_hostptr(void *_hostptr){
            hostptr = _hostptr;
        }
        void set_size(size_t _size){
            size = _size;
        }
        void set_element_size(size_t _T){
            T = _T;
        }
        void set_buffer(id<MTLBuffer> _buffer){
            buffer = _buffer;
        }
        id<MTLBuffer> get_buffer(){
            return buffer;
        }
        __strong id<MTLBuffer> *get_bufptr(){
            return bufptr;
        }
        size_t get_element_size(){
            return T;
        }
        void* get_hostptr(){
            return hostptr;
        }
        
        size_t get_size(){
            return size;
        }
        
        device get_device(){
            return _device;
        }
        
    };
}

#endif
