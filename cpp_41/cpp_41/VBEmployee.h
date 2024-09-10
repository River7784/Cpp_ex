//
//  VBEmployee.h
//  cpp_41
//
//  Created by 유가람 on 9/7/24.
//

#ifndef VBEmployee_h
#define VBEmployee_h
#include <iostream>
#include <string>
#include "VBPerson.h"
using namespace std;

//Person을 가상 기초 클래스로 상속함
class Employee : virtual public Person {
    string company;
    
public:
    Employee(const string& n, const string& c) : Person(n), company(c){}
    void print() const{
        Person::print();
        cout << " is employed by " << company << endl;
    }
};

#endif /* VBEmployee_h */
