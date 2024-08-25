//
//  MIParttime.h
//  cpp_39
//
//  Created by 유가람 on 8/25/24.
//

#ifndef MIParttime_h
#define MIParttime_h
#include <string>
#include "MIStudent.h"
#include "MIEmployee.h"

class Parttime : public Student, public Employee {
public:
    Parttime(const string& s, const string& c) : Student(s), Employee(c) {}
};

#endif /* MIParttime_h */
