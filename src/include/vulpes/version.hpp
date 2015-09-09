//
//  version.hpp
//
//  Created by Aditya Atluri on 7/11/15.
//  Copyright © 2015 Aditya Atluri. All rights reserved.
//

#ifndef version_hpp
#define version_hpp

#define VULPES_VERSION 11000
//  Two digits for every version from right
/*  XYYZZ
X = Major Version, 
Y = Minor Version,
Z = Development Version
*/

#define VULPES_MAJOR_VERSION VULPES_VERSION/10000

#define VULPES_MINOR_VERSION (VULPES_VERSION/100)%100

#define VULPES_DEV_VERSION VULPES_VERSION%100

#endif
