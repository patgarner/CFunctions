//
//  CPPFunctions.cpp.cpp
//  
//
//  Created by Pat Garner on 6/25/23.
//

#include "CPPFunctions.hpp"
#include <iostream>

TestClass::TestClass() {
    std::cout << "Creating TestClass Instance" << std::endl;
}

TestClass::~TestClass() {
    std::cout << "Deallocating TestClass Instance" << std::endl;
}
