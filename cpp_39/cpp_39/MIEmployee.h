//
//  MIEmployee.h
//  cpp_39
//
//  Created by 유가람 on 8/23/24.
//

#ifndef MIEmployee_h
#define MIEmployee_h
#include <iostream>
#include <string>
using namespace std;

class Employee {
    string company;
    
public:
    Employee(const string& c) : company(c) {}
    void printCompany() const { cout << company << endl; }
};

#endif /* MIEmployee_h */
