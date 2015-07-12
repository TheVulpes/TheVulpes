//
//  Created by Aditya Atluri on 7/11/15.
//  Copyright © 2015 Aditya Atluri. All rights reserved.
//


#ifndef iterator_hpp
#define iterator_hpp

#include "device.hpp"
#include "vector.hpp"

namespace vulpes{
    template<typename T>
    class Iterator{
    private:
        id<MTLBuffer> buffer;
        __strong id<MTLBuffer> *bufptr;
        T* hostptr;
        size_t size;
        device _device;
        size_t single;
    public:
        Iterator(device __device,__strong id<MTLBuffer> *_buffer, T* _hostptr, size_t _single, size_t _size){
            buffer = *_buffer;
            bufptr = _buffer;
            hostptr = _hostptr;
            _device = __device;
            single = _single;
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
        void set_hostptr(T *_hostptr){
            hostptr = _hostptr;
        }
        void set_size(size_t _size){
            size = _size;
        }
        void set_element_size(size_t _single){
            single = _single;
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
            return single;
        }
        T* get_hostptr(){
            return hostptr;
        }
        
        size_t get_size(){
            return size;
        }
        
        device get_device(){
            return _device;
        }
    };
    template<typename T>
    Iterator<T> operator+(Iterator<T> In,const T id){
        In.set_hostptr(In.get_hostptr() + id);
        return In;
    }
}

#endif
