//
//  vector.hpp
//
//  Created by Aditya Atluri on 7/3/15.
//  Copyright © 2015 Aditya Atluri. All rights reserved.
//

#ifndef vector_hpp
#define vector_hpp

#include "device.hpp"
#include "allocator.hpp"
#include "iterator.hpp"
#include <vector>

namespace vulpes{
    template<typename T>
    class vector{
    private:
        size_t len;
        device _device;
        size_t size;
        id<MTLBuffer> buffer;
        T *hostptr;
    public:
        vector(){}
        vector(size_t _len, device __device){
            len = _len;
            _device = __device;
            size = sizeof(T)*len;
            hostptr = NULL;
        }
        vector(std::vector<T> &host, device __device){
            len = host.size();
            size = sizeof(T) * len;
            hostptr = &host[0];
            _device = __device;
            buffer = [__device.get_device() newBufferWithBytes:&host[0] length:size options:0];
        }
        vector(std::vector<T> &host){
            len = host.size();
            size = sizeof(T) * len;
            hostptr = &host[0];
            buffer = [_device.get_device() newBufferWithBytes:&host[0] length:size options:0];
        }
        vector(std::vector<T,aligned_allocator<T>> &host){
            len = host.size();
            size = sizeof(T) * len;
            if(size%4096 > 0){
                size = ((size/4096)+1)*4096;
            }
            hostptr = &host[0];
            buffer = [_device.get_device() newBufferWithBytesNoCopy:&host[0] length:size options:0 deallocator:nil];
        }
        vector(std::vector<T,aligned_allocator<T>> &host, device __device){
            len = host.size();
            _device = __device;
            size = sizeof(T) * len;
            if(size%4096 > 0){
                size = ((size/4096)+1)*4096;
            }
            hostptr = &host[0];
            buffer = [__device.get_device() newBufferWithBytesNoCopy:&host[0] length:size options:0 deallocator:nil];
        }
        vector(T* start, T* end){
            hostptr = start;
            len = end - start;
            size = sizeof(T)*len;
            buffer = [_device.get_device() newBufferWithBytes:start length:size options:0];
        }
        vector(size_t _len, T value){
            len = _len;
            size = sizeof(T)*len;
            std::vector<T> host(_len, value);
            hostptr = &host[0];
            buffer = [_device.get_device() newBufferWithBytes:&host[0] length:size options:0];
        }
        Iterator<T> begin(){
            vulpes::Iterator<T> _iterator(_device, &buffer, hostptr, sizeof(T), size);
            return _iterator;
        }
        
        Iterator<T> end(){
            vulpes::Iterator<T> _iterator(_device, &buffer, (T*)hostptr+len, sizeof(T), size);
            return _iterator;
        }
        id<MTLBuffer> get_buffer(){
            return buffer;
        }
        void htod(void* array, size_t size, device &_device){
            hostptr = array;
            buffer = [_device.get_device() newBufferWithBytes:array length:size options:0];
        }
        device get_device(){
            return _device;
        }
        vulpes::vector<T>& operator=(std::vector<T>& rhs){
            vector<T> lhs(rhs);
            return lhs;
        }
        T& operator[](int id){
            return *(hostptr+id);
        }
    };
}

#endif /* vector_hpp */
