//
//  CFunctions.h
//  TestCLibrary
//
//  Created by Pat Garner on 6/25/23.
//

#ifndef CFunctions_h
#define CFunctions_h

#include "CPPFunctions.hpp"

void sayHello(void);

typedef struct {
    char a;
    int b;
} Test;

Test* newTest();

#endif /* CFunctions_h */
