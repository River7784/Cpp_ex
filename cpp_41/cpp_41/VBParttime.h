//
//  VBParttime.h
//  cpp_41
//
//  Created by 유가람 on 9/10/24.
//

#ifndef VBParttime_h
#define VBParttime_h
#include "VBStudent.h"
#include "VBEmployee.h"

// Student와 Employee를 상속
class Parttime : public Student, public Employee {
public:
    //Person의 생성자를 명시적으로 호출
    Parttime(sconst string& n, const string& s, const string& c) : Person(n), Student(n, s), Employee(n, c){}
    void print() const{
        Student::print();
        Employee::print();
    }
};

#endif /* VBParttime_h */
