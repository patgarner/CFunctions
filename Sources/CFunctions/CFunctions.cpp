//
//  CFunctions.c
//  TestCLibrary
//
//  Created by Pat Garner on 6/25/23.
//

#include "CFunctions.h"
#include <stdio.h>
#include <stdlib.h>

void sayHello(void) {
    printf("hello!\n");
}

typedef struct {
    char a;
    int b;
} Test;

Test* newTest() {
    Test *test = (Test*)malloc(sizeof(Test));
    test->a = 'a';
    test->b = 55;
    return test;
}
