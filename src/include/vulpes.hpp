//
//  vulpes.hpp
//
//  Created by Aditya Atluri on 7/3/15.
//  Copyright © 2015 Aditya Atluri. All rights reserved.
//

#ifndef vulpes_hpp
#define vulpes_hpp

#import <Foundation/Foundation.h>
#import <Metal/Metal.h>

#include "./vulpes/device.hpp"
#include "./vulpes/system.hpp"
#include "./vulpes/library.hpp"
#include "./vulpes/command_queue.hpp"
#include "./vulpes/vector.hpp"
#include "./vulpes/copy.hpp"
#include "./vulpes/allocator.hpp"
#include "./vulpes/algorithm.hpp"
#include "./vulpes/program.hpp"
#include "./vulpes/functional.hpp"
#include "./vulpes/iterator.hpp"
#include "./vulpes/version.hpp"

#define METAL_SRC(src) "#include<metal_stdlib>\n using namespace metal;\n"#src

#endif /* vulpes_hpp */
