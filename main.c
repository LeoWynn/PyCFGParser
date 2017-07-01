//
//  main.c
//  pythoncall
//
//  Created by coreos on 5/16/17.
//  Copyright © 2017 Leo Wen. All rights reserved.
//

#include <stdio.h>

#import "panic_config.h"


int main(int argc, const char * argv[]) {
    // insert code here...
    //printf("%s",listPanicTriage());
    printf("panic triage: %s\n", listPanicTriage());
    printf("MIPIDSI = %s\n", getCMDWithTriage("MIPIDSI"));
    printf("halt error = %s\n", getCMDWithTriage("halt error"));
    
    //test3();
    return 0;
}
