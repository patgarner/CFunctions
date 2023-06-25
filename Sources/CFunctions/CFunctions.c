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

Test* newTest() {
    Test *test = (Test*)malloc(sizeof(Test));
    test->a = 'a';
    test->b = 55;
    return test;
}

Test newTest2() {
    return (Test){'b', 36};
}

Test* deleteTest(Test *test) {
    free(test);
    return NULL;
}
