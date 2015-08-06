//
//  algorithm.hpp
//
//  Created by Aditya Atluri on 7/3/15.
//  Copyright © 2015 Aditya Atluri. All rights reserved.
//

#ifndef algorithm_hpp
#define algorithm_hpp

#include "device.hpp"
#include "functional.hpp"
#include "program.hpp"
#include "vector.hpp"

namespace vulpes{
    template<typename InputIterator,
                typename SecondIterator,
                typename OutputIterator,
                typename BinaryOp>
    void transform(InputIterator FirstStart,
                   InputIterator FirstEnd,
                   SecondIterator Second,
                   OutputIterator Third,
                   BinaryOp _functional){
        device _device = FirstStart.get_device();
        command_queue queue(_device);
        program _program = vulpes::create_with_source(_functional.get_source(), _device, queue);
        function _function(_program, _functional.get_name());
        _program.build();
        _program.set_args(0, 0, FirstStart.get_buffer());
        _program.set_args(1, 0, Second.get_buffer());
        _program.set_args(2, 0, Third.get_buffer());
        
        size_t len = FirstEnd.get_size()/FirstStart.get_element_size();
        
        if(len < 512){
            _program.run({1,1,1},{len,1,1});
        }else{
            _program.run({len/512,1,1}, {512,1,1});
        }
    }
    
    template<typename InputIterator,
                typename OutputIterator,
                typename UnaryOp>
    void transform(InputIterator FirstStart, // InputIterator is vulpes::Iterator<T>
                   InputIterator FirstEnd,
                   OutputIterator Second,
                   UnaryOp _functional){
        device _device = FirstStart.get_device();
        command_queue queue(_device);
        program _program = vulpes::create_with_source(_functional.get_source(), _device, queue);
        function _function(_program, _functional.get_name());
        _program.build();
        _program.set_args(0, 0, FirstStart.get_buffer());
        _program.set_args(1, 0, Second.get_buffer());
        
        size_t len = FirstEnd.get_size()/FirstStart.get_element_size();
        
        if(len < 512){
            _program.run({1,1,1},{len,1,1});
        }else{
            _program.run({len/512,1,1}, {512,1,1});
        }
    }
    
    template<typename InputIterator,
            typename T>
    void fill(InputIterator Start,
              InputIterator End,
              T value){
        device _device = Start.get_device();
        command_queue queue(_device);
        functional _fill = get_fill<T>();
        program _program = vulpes::create_with_source(_fill.get_source(), _device, queue);
        function _function(_program, _fill.get_name());
        _program.build();
        T A[1] = {value};
        id<MTLBuffer> buffer= [_device.get_device() newBufferWithBytes:A length:sizeof(A) options:0];
        _program.set_args(0, 0, buffer);
        _program.set_args(1, 0, Start.get_buffer());
        
        size_t len = End.get_hostptr() - Start.get_hostptr();
        
        if(len < 512){
            _program.run({1,1,1},{len,1,1});
        }else{
            _program.run({len/512,1,1}, {512,1,1});
        }
    }
    
    template<typename InputIterator,
            typename T>
    void replace(InputIterator Start, InputIterator End,
                 T key, T value){
        device _device = Start.get_device();
        command_queue queue(_device);
        functional _replace = get_replace<T>();
        program _program = vulpes::create_with_source(_replace.get_source(), _device, queue);
        function _function(_program, _replace.get_name());
        _program.build();
        T A[1] = {key};
        T B[1] = {value};
        id<MTLBuffer> buffer1 = [_device.get_device() newBufferWithBytes:A length:sizeof(A) options:0];
        id<MTLBuffer> buffer2 = [_device.get_device() newBufferWithBytes:B length:sizeof(B) options:0];
        
        _program.set_args(0, 0, Start.get_buffer());
        _program.set_args(1, 0, buffer1);
        _program.set_args(2, 0, buffer2);
        size_t len = End.get_hostptr() - Start.get_hostptr();
        
        if(len < 512){
            _program.run({1,1,1},{len,1,1});
        }else{
            _program.run({len/512,1,1}, {512,1,1});
        }
    }
    
    /*
     The input to sequence should always be an Iterator
    */
    
    template<typename InputInterator,
            typename T>
    void sequence(InputInterator Start,
                  InputInterator End,
                  T Init, T Step){
        device _device = Start.get_device();
        command_queue queue(_device);
        functional _seq = get_sequence<T>();
        program _program = vulpes::create_with_source(_seq.get_source(), _device, queue);
        function _function(_program, _seq.get_name());
        _program.build();
        T init[1] = {Init};
        T step[1] = {Step};
        id<MTLBuffer> buffer1= [_device.get_device() newBufferWithBytes:init length:sizeof(init) options:0];
        id<MTLBuffer> buffer2= [_device.get_device() newBufferWithBytes:step length:sizeof(step) options:0];
        _program.set_args(0, 0, Start.get_buffer());
        _program.set_args(1, 0, buffer1);
        _program.set_args(2, 0, buffer2);
        size_t len = End.get_hostptr() - Start.get_hostptr();
        
        if(len < 512){
            _program.run({1,1,1},{len,1,1});
        }else{
            _program.run({len/512,1,1}, {512,1,1});
        }
    }
    
    template<typename InputInterator,
            typename T>
    void sequence(InputInterator Start,
                  InputInterator End,
                  T Init){
        device _device = Start.get_device();
        command_queue queue(_device);
        functional _seq = get_sequence<T>();
        program _program = vulpes::create_with_source(_seq.get_source(), _device, queue);
        function _function(_program, _seq.get_name());
        _program.build();
        T init[1] = {Init};
        T step[1] = {1};
        id<MTLBuffer> buffer1= [_device.get_device() newBufferWithBytes:init length:sizeof(init) options:0];
        id<MTLBuffer> buffer2= [_device.get_device() newBufferWithBytes:step length:sizeof(step) options:0];
        _program.set_args(0, 0, Start.get_buffer());
        _program.set_args(1, 0, buffer1);
        _program.set_args(2, 0, buffer2);
        size_t len = End.get_hostptr() - Start.get_hostptr();
        
        if(len < 512){
            _program.run({1,1,1},{len,1,1});
        }else{
            _program.run({len/512,1,1}, {512,1,1});
        }
    }
    
    template<typename T>
    void sequence(vulpes::Iterator<T> Start,
                  vulpes::Iterator<T> End){
        device _device = Start.get_device();
        command_queue queue(_device);
        functional _seq = get_sequence<T>();
        program _program = vulpes::create_with_source(_seq.get_source(), _device, queue);
        function _function(_program, _seq.get_name());
        T init[1] = {0};
        T step[1] = {1};
        id<MTLBuffer> buffer1= [_device.get_device() newBufferWithBytes:init length:sizeof(init) options:0];
        id<MTLBuffer> buffer2= [_device.get_device() newBufferWithBytes:step length:sizeof(step) options:0];
        _program.set_args(0, 0, Start.get_buffer());
        _program.set_args(1, 0, buffer1);
        _program.set_args(2, 0, buffer2);
        
        size_t len = End.get_hostptr() - Start.get_hostptr();
        
        if(len < 512){
            _program.run({1,1,1},{len,1,1});
        }else{
            _program.run({len/512,1,1}, {512,1,1});
        }
    }

}

#endif /* algorithm_hpp */
