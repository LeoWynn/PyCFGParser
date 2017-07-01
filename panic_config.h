//
//  panic_config.h
//  pythoncall
//
//  Created by coreos on 5/16/17.
//  Copyright © 2017 Leo Wen. All rights reserved.
//

#ifndef panic_config_h
#define panic_config_h

#include <stdio.h>
#import <Python/Python.h>

#define MODULE_NAME "cfgparser"

extern const char* listPanicTriage();
extern const char* getCMDWithTriage();


#endif /* panic_config_h */
