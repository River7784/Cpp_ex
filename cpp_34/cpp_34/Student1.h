//
//  Student1.h
//  cpp_34
//
//  Created by 유가람 on 8/3/24.
//

#ifndef Student1_h
#define Student1_h
#include <iostream>
#include <string>
#include "Person1.h"

// Person을 상속받아서 선언
class Student : public Person {
    string school;
    
public:
    void setSchool(const string& s) { school = s; }
    string getSchool() const { return school; }
    void print() const {
        Person::print();
        cout << " goes to " << school;
    }
};

#endif /* Student1_h */
