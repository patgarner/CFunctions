//
//  CPPFunctions.cpp.cpp
//  
//
//  Created by Pat Garner on 6/25/23.
//

#include "CPPHeader.hpp"
#include <iostream>

TestClass::TestClass() {
    std::cout << "Creating TestClass Instance" << std::endl;
}

TestClass::~TestClass() {
    std::cout << "Deallocating TestClass Instance" << std::endl;
}

void doSomething(void) {
    TestClass();
}
