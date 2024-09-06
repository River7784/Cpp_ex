//
//  VBPerson.h
//  cpp_41
//
//  Created by 유가람 on 9/5/24.
//

#ifndef VBPerson_h
#define VBPerson_h
#include <iostream>
#include <string>
using namespace std;

class Person {
    string name;
    
public:
    Person(const string& n) : name(n){}
    void print() const { cout << name; }
};

#endif /* VBPerson_h */
