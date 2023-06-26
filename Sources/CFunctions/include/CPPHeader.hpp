//
//  CPPFunctions.cpp.hpp
//  
//
//  Created by Pat Garner on 6/25/23.
//

#ifndef CPPFunctions_hpp
#define CPPFunctions_hpp

#ifdef __cplusplus
extern "C" {
#endif

namespace TC {
    void doSomething(void);
    void *newTestClass();
    void sayHello(void *val);
    void *deleteTestClass(void *val);
};

#ifdef __cplusplus
}
#endif

#endif /* CPPFunctions_cpp_hpp */
