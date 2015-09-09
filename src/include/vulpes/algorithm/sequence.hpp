#ifndef sequence_hpp
#define sequence_hpp

namespace vulpes {
    template<typename InputInterator,
    typename T>
    void sequence(InputInterator Start,
                  InputInterator End,
                  T Init, T Step){
        device _device = Start.get_device();
        command_queue queue(_device);
        functional _seq = get_sequence<T>();
        program _program = vulpes::create_from_metal(_device, queue);
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
        program _program = vulpes::create_from_metal(_device, queue);
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
        program _program = vulpes::create_from_metal(_device, queue);
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


#endif
