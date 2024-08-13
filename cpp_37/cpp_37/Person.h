//
//  Person.h
//  cpp_37
//
//  Created by 유가람 on 8/11/24.
//

#ifndef Person_h
#define Person_h
#include <iostream>
#include <string>
using namespace std;

class Person {
    string name;
    
public:
    Person(const string& n) : name(n){}
    string getName() const { return name; }
    void print() const { cout << name; }
};

#endif /* Person_h */
