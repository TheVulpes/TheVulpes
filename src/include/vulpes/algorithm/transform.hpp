#ifndef transform_hpp
#define transform_hpp

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
        program _program = vulpes::create_from_metal(_device, queue);
        function _function(_program, _functional.get_name());
        _program.build();
        _program.set_args(0, 0, FirstStart.get_buffer());
        _program.set_args(1, 0, Second.get_buffer());
        _program.set_args(2, 0, Third.get_buffer());
        
        size_t len = FirstEnd.get_hostptr() - FirstStart.get_hostptr();
        
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
        program _program = vulpes::create_from_metal(_device, queue);
        function _function(_program, _functional.get_name());
        _program.build();
        _program.set_args(0, 0, FirstStart.get_buffer());
        _program.set_args(1, 0, Second.get_buffer());
        
        size_t len = FirstEnd.get_hostptr() - FirstStart.get_hostptr();
        
        if(len < 512){
            _program.run({1,1,1},{len,1,1});
        }else{
            _program.run({len/512,1,1}, {512,1,1});
        }
    }
}

#endif
