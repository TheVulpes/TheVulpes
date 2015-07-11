//
//  copy.hpp
//
//  Created by Aditya Atluri on 7/3/15.
//  Copyright © 2015 Aditya Atluri. All rights reserved.
//

#ifndef copy_hpp
#define copy_hpp

#include "device.hpp"

namespace vulpes{
        template<class InputIterator>
        void copy(const InputIterator &first,
                  const InputIterator &end,
                            Iterator third,
                            device _device){
            size_t oldsize = &(*end) - &(*first);
            oldsize *= sizeof(end);
            void *array = &(*first);
            __strong id<MTLBuffer> *bufptr = third.get_bufptr();
            *bufptr = [_device.get_device() newBufferWithBytes:array length:third.get_size() options:0];
        }
}

#endif /* copy_hpp */
