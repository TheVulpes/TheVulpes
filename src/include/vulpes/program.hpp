//
//  program.hpp
//
//  Created by Aditya Atluri on 7/3/15.
//  Copyright © 2015 Aditya Atluri. All rights reserved.
//

#ifndef program_hpp
#define program_hpp

#include "device.hpp"

namespace vulpes{
    class program{
    private:
        id<MTLDevice> _device;
        id<MTLLibrary> library;
        id<MTLCommandBuffer> command_buffer;
        id<MTLComputeCommandEncoder> command_encoder;
        id<MTLFunction> _function;
        id<MTLComputePipelineState> compute_pipeline_state;
        id<MTLCommandQueue> queue;
    public:
        program(){}
        
        program(device __device){
            _device = __device.get_device();
        }
        
        void set_command_buffer(command_queue _queue){
            queue = _queue.get_queue();
            command_buffer = [queue commandBuffer];
        }
        
        
        void set_command_encoder(){
            command_encoder = [command_buffer computeCommandEncoder];
        }
        
        void set_library(NSString *src){
            NSError *errors;
            library = [_device newLibraryWithSource:src options:0 error:&errors];
        }
        
        
        void create_with_source(std::string _src){
            NSString *src = [NSString stringWithCString:_src.c_str() encoding:[NSString defaultCStringEncoding]];
            set_library(src);
        }
        template<typename T>
        void set_args(uint pos, uint _offset, vulpes::vector<T> &vec){
            [command_encoder setBuffer:vec.get_buffer() offset:_offset atIndex:pos];
        }
        
        void set_args(uint pos, uint _offset, id<MTLBuffer> buffer){
            [command_encoder setBuffer:buffer offset:_offset atIndex:pos];
        }
        
        void set_function(NSString *_name){
            _function = [library newFunctionWithName:_name];
        }
        
        void build(){
            NSError *errors;
            compute_pipeline_state = [_device newComputePipelineStateWithFunction:_function error:&errors];
            if(errors){
                std::cout<<"Errors"<<std::endl;
            }
            [command_encoder setComputePipelineState:compute_pipeline_state];
        }
        
        
        void run(vec3 threadgroups, vec3 threads){
            MTLSize numThreadgroups = {threadgroups.x, threadgroups.y, threadgroups.z};
            MTLSize threadsPerGroup = {threads.x, threads.y, threads.z};
            [command_encoder dispatchThreadgroups:numThreadgroups threadsPerThreadgroup:threadsPerGroup];
            [command_encoder endEncoding];
            [command_buffer commit];
            [command_buffer waitUntilCompleted];
        }
    };
    
    static program create_with_source(std::string _src, device __device, command_queue __queue){
        program _program(__device);
        _program.create_with_source(_src);
        _program.set_command_buffer(__queue);
        _program.set_command_encoder();
        return _program;
    }

    class function{
    private:
        program _program;
        NSString *_name;
    public:
        function(program &__program, std::string __name){
            NSString *name = [NSString stringWithCString:__name.c_str() encoding:[NSString defaultCStringEncoding]];
            _name = name;
            _program = __program;
            __program.set_function(name);
            __program.build();
            
        }
        template<typename T>
        void set_arg(uint pos, uint offset, vulpes::vector<T> &vec){
            _program.set_args(pos, offset, vec);
        }
    };
}

#endif /* program_hpp */
