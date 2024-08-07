//
//  Person2.h
//  cpp_35
//
//  Created by 유가람 on 8/4/24.
//

#ifndef Person2_h
#define Person2_h
#include <iostream>
#include <string>
using namespace std;

class Person {
    string name;
    
public: 
    Person(const string& n) {
        cout << "Person의 생성자" << endl;
        name = n;
    }
    ~Person(){
        cout << "Person의 소멸자" << endl;
    }
    string getName() const { return name; }
    void print() const { cout << name; }
};

#endif /* Person2_h */
