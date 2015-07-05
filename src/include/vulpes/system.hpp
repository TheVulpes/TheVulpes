//
//  system.hpp
//
//  Created by Aditya Atluri on 7/3/15.
//  Copyright © 2015 Aditya Atluri. All rights reserved.
//

#ifndef system_hpp
#define system_hpp

#include "device.hpp"

namespace vulpes{
    class system{
    private:
    public:
        static device default_device(){
            device _device;
            return _device;
        }
    };
}

#endif /* system_hpp */
