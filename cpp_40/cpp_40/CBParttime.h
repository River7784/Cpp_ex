//
//  CBParttime.h
//  cpp_40
//
//  Created by 유가람 on 9/1/24.
//

#ifndef CBParttime_h
#define CBParttime_h
#include "CBStudent.h"
#include "CBEmployee.h"

class Parttime : public Student, public Employee {
public:
    Parttime(const string& n, const string& s, const string& c):
    Student(n, s), Employee(n, c){}
};

#endif /* CBParttime_h */
