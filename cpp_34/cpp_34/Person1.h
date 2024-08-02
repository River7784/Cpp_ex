//
//  Person1.h
//  cpp_34
//
//  Created by 유가람 on 8/2/24.
//

#ifndef Person1_h
#define Person1_h
#include <iostream>
#include <string>
using namespace std;

class Person{
    string name;
public:
    void setName(const string& n) { name = n; }
    string getName() const { return name; }
    void print() const { cout << name; }
};

#endif /* Person1_h */
