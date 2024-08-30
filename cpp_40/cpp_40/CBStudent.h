//
//  CBStudent.h
//  cpp_40
//
//  Created by 유가람 on 8/30/24.
//

#ifndef CBStudent_h
#define CBStudent_h
#include <iostream>
#include <string>
#include "CBPerson.h"
using namespace std;

class Student : public Person {
    string school;
    
public:
    Student(const string& n, const string& s) : Person(n), shcool(s) {}
    void print() const{
        Person::print();
        cout << " goes to " << school << endl;
    }
};

#endif /* CBStudent_h */
