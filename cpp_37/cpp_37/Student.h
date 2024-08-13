//
//  Student.h
//  cpp_37
//
//  Created by 유가람 on 8/11/24.
//

#ifndef Student_h
#define Student_h
#include <iostream>
#include <string>
#include "Person.h"

//Person의 파생 클래스 Student 정의
class Student : public Person {
    string school;
    
public:
    Student(const string& n, const string& s) : Person(n), school(s) {}
    string getSchool() const { return school; }
    void print() const{
        Person::print();
        cout << " goes to " << school;
    }
};

#endif /* Student_h */
