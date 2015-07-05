//
//  command_queue.hpp
//
//  Created by Aditya Atluri on 7/3/15.
//  Copyright © 2015 Aditya Atluri. All rights reserved.
//

#ifndef command_queue_hpp
#define command_queue_hpp

#include "device.hpp"

namespace vulpes{
    class command_queue{
    private:
        id<MTLCommandQueue> mCQ;
    public:
        command_queue(device _device){
            mCQ = [_device.get_device() newCommandQueue];
        }
        id<MTLCommandQueue> get_queue(){
            return mCQ;
        }
    };
}

#endif /* command_queue_hpp */
