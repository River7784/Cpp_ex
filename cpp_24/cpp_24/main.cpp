//
//  main.cpp
//  cpp_24
//
//  Created by 유가람 on 7/9/24.
//

#include <iostream>

class IntClass2 {
    int a;
public:
    IntClass2(int n=0) : a(n) {}
    IntClass2 operator ++(int){
        IntClass2 tmp(*this);
        ++a;
        return tmp;
    }
    int getValue() const { return a;}
};
