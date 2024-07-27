//
//  main.cpp
//  cpp_32
//
//  Created by 유가람 on 7/27/24.
//

#include <iostream>
#include <cstring>
#include "MyString.h"

MyString::MyString(int s) : len(0), bufSize(s){
    buf = new char[s+1];
    buf[0] = '\0';
}

