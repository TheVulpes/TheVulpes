#ifndef fill_hpp
#define fill_hpp

namespace vulpes{
    template<typename InputIterator,
                typename T>
    void fill(InputIterator Start,
              InputIterator End,
              const T& value){
        device _device = Start.get_device();
        command_queue queue(_device);
        program _program = vulpes::create_from_metal(_device, queue);
        functional _fill = get_fill<T>();
        function _function(_program, _fill.get_name());
        _program.build();
        id<MTLBuffer> buffer= [_device.get_device() newBufferWithBytes:&value length:sizeof(value) options:0];
        _program.set_args(0, 0, buffer);
        _program.set_args(1, 0, Start.get_buffer());
        
        size_t len = End.get_hostptr() - Start.get_hostptr();
        
        if(len < 512){
            _program.run({1,1,1},{len,1,1});
        }else{
            _program.run({len/512,1,1}, {512,1,1});
        }
    }
}

#endif
