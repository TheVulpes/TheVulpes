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
        template<class InputIterator, class OutputIterator>
        void vcopy(const InputIterator &first,
                        const InputIterator &end,
                        OutputIterator &dbegin,
                        device _device){
            size_t oldsize = &(*end) - &(*first);
            oldsize *= sizeof(end);
            void *array = &(*first);
            dbegin.htod(array,oldsize,_device);
        }
}

#endif /* copy_hpp */
