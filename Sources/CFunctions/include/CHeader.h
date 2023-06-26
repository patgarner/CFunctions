//
//  Header.h
//  
//
//  Created by Pat Garner on 6/26/23.
//

#ifndef Header_h
#define Header_h

void sayHello(void);

typedef struct {
    char a;
    int b;
} Test;

Test* newTest();
Test newTest2();
Test* deleteTest(Test *test);


#endif /* Header_h */
