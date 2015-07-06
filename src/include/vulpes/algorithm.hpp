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
    
    template<typename T , typename U>
    void transform(vulpes::vector<T>& First, size_t len, vulpes::vector<T>& Second, vulpes::vector<U>& Third,
                          vulpes::functional _functional){
        device _device = First.get_device();
        command_queue queue(_device);
        program _program = vulpes::create_with_source(_functional.get_source(), _device, queue);
        function _function(_program, _functional.get_name());
        _program.build();
        _function.set_arg(0, 0, First);
        _function.set_arg(1, 0, Second);
        _function.set_arg(2, 0, Third);
        
        if(len < 512){
            _program.run({1,1,1},{len,1,1});
        }else{
            _program.run({len/512,1,1}, {512,1,1});
        }
    }
    
    template<typename T>
    void transform(vulpes::vector<T>& First, size_t len, vulpes::vector<T>& Second,
                   vulpes::functional _functional){
        device _device = First.get_device();
        command_queue queue(_device);
        program _program = vulpes::create_with_source(_functional.get_source(), _device, queue);
        function _function(_program, _functional.get_name());
        _program.build();
        _function.set_arg(0, 0, First);
        _function.set_arg(1, 0, Second);
        
        if(len < 512){
            _program.run({1,1,1},{len,1,1});
        }else{
            _program.run({len/512,1,1}, {512,1,1});
        }
    }
}

#endif /* algorithm_hpp */

