//
//  device.hpp
//
//  Created by Aditya Atluri on 7/3/15.
//  Copyright © 2015 Aditya Atluri. All rights reserved.
//

#ifndef device_hpp
#define device_hpp

namespace vulpes{
    struct vec3{
        size_t x,y,z;
    };
    class device{
    private:
        id<MTLDevice> mdevice;
        MTLSize mdims;
        vec3 dims;
    public:
        device(){
            mdevice = MTLCreateSystemDefaultDevice();
        }
        id<MTLDevice> get_device(){
            return mdevice;
        }
        std::string get_name(){
            std::string *bar = new std::string([mdevice.name UTF8String]);
            return *bar;
        }
        device& operator=(device &rhs){
            return rhs;
        }
        struct vec3 get_max_threads_per_group(){
            mdims = mdevice.maxThreadsPerThreadgroup;
            dims.x = mdims.width;
            dims.y = mdims.height;
            dims.z = mdims.depth;
            return dims;
        }
    };
}

#endif /* device_hpp */
