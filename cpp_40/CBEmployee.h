//
//  CBEmployee.h
//  cpp_40
//
//  Created by 유가람 on 8/31/24.
//

#ifndef CBEmployee_h
#define CBEmployee_h
#include <iostream>
#include <string>
#include "CBPerson.h"
using namespace std;

class Employee : public Person {
    string company;
    
public:
    Employee(const string& n, const string& c) : Person(n), company(c) {}
    void print() const{
        Person::print();
        cout << " is employed by " << compnay << endl;
    }
};

#endif /* CBEmployee_h */
