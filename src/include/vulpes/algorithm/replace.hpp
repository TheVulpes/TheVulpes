#ifndef replace_hpp
#define replace_hpp


namespace vulpes {
    template<typename InputIterator,
            typename T>
    void replace(InputIterator Start, InputIterator End,
                 const T& key, const T& value){
        device _device = Start.get_device();
        command_queue queue(_device);
        functional _replace = get_replace<T>();
        program _program = vulpes::create_from_metal(_device, queue);
        function _function(_program, _replace.get_name());
        _program.build();
        id<MTLBuffer> buffer1 = [_device.get_device() newBufferWithBytes:&key length:sizeof(key) options:0];
        id<MTLBuffer> buffer2 = [_device.get_device() newBufferWithBytes:&value length:sizeof(value) options:0];
        
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
    
    template<typename InputIterator,
                typename OutputIterator,
                typename T>
    void replace_copy(InputIterator Start, InputIterator End,
                      OutputIterator Begin,
                      const T& key, const T& value){
        device _device = Start.get_device();
        command_queue queue(_device);
        functional _replace = get_replace_copy<T>();
        program _program = vulpes::create_from_metal(_device, queue);
        function _function(_program, _replace.get_name());
        _program.build();
        id<MTLBuffer> buffer1 = [_device.get_device() newBufferWithBytes:&key length:sizeof(key) options:0];
        id<MTLBuffer> buffer2 = [_device.get_device() newBufferWithBytes:&value length:sizeof(value) options:0];
        
        _program.set_args(0, 0, Start.get_buffer());
        _program.set_args(1, 0, Begin.get_buffer());
        _program.set_args(2, 0, buffer1);
        _program.set_args(3, 0, buffer2);
        size_t len = End.get_hostptr() - Start.get_hostptr();
        
        if(len < 512){
            _program.run({1,1,1},{len,1,1});
        }else{
            _program.run({len/512,1,1}, {512,1,1});
        }
    }
}


#endif
