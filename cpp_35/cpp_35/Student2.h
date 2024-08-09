//
//  Student2.h
//  cpp_35
//
//  Created by 유가람 on 8/7/24.
//

#ifndef Student2_h
#define Student2_h
#include <iostream>
#include <string>
#include "Person2.h"

//Person의 파생클래스 student 선언
class Student : public Person {
    string school;
    
public:
    Student(const string& n, const string& s) : Person(n) {
        cout << "Student의 생성자" << endl;
        school = s;
    }
    ~Student() {
        cout << "Student의 소멸자" << endl;
    }
    string getSchool() const{
        return school;
    }
    void print() const {
        Person::print();
        cout << " goes to" << school;
    }
};

#endif /* Student2_h */
