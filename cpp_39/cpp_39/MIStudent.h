//
//  MIStudent.h
//  cpp_39
//
//  Created by 유가람 on 8/22/24.
//

#ifndef MIStudent_h
#define MIStudent_h
#include <iostream>
#include <string>
using namespace std;

class Student {
    string school;
    
public:
    Student(const string& s) : school(s){}
    void printSchool() const { cout << school << endl; }
};

#endif /* MIStudent_h */
