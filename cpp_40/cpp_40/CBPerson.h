//
//  CBPerson.h
//  cpp_40
//
//  Created by 유가람 on 8/28/24.
//

#ifndef CBPerson_h
#define CBPerson_h
#include <iostream>
#include <string>
using namespace std;

class Person {
    string name;
    
public:
    Person(const string& n) : name(n){}
    void print() const { cout << name; }
};

#endif /* CBPerson_h */
