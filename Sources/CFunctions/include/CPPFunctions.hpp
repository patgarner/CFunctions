//
//  CPPFunctions.cpp.hpp
//  
//
//  Created by Pat Garner on 6/25/23.
//

#ifndef CPPFunctions_cpp_hpp
#define CPPFunctions_cpp_hpp

#include <iostream>

class TestClass {
    TestClass() {
        std::cout << "Creating TestClass Instance" << std::endl;
    }
    ~TestClass() {
        std::cout << "Deallocating TestClass Instance" << std::endl;
    }
};

#endif /* CPPFunctions_cpp_hpp */
