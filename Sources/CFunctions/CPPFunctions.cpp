//
//  CPPFunctions.cpp.cpp
//  
//
//  Created by Pat Garner on 6/25/23.
//

#include "CPPHeader.hpp"
#include <iostream>

class TestClass {
public:
    TestClass() {
        std::cout << "Creating TestClass Instance" << std::endl;
    }
    
    ~TestClass() {
        std::cout << "Deallocating TestClass Instance" << std::endl;
    }
    
    const void sayHello() const {
        std::cout << "Hello!" << std::endl;
    }
};

void doSomething() {
    TestClass();
}

void *newTestClass() {
    TestClass *testClass = new TestClass();
    return (void*)testClass;
}

void sayHelloTC(void *val) {
    TestClass *testClass = (TestClass*)val;
    testClass->sayHello();
}

void *deleteTestClass(void *val) {
    TestClass *testClass = (TestClass*)val;
    delete testClass;
}
