//
//  main.cpp
//  cpp_40
//
//  Created by 유가람 on 8/28/24.
//

#include <iostream>
#include "CBParttime.h"

int main(){
    Parttime ann("Ann", "ABC Univ", "DEF co.");
    ann.Student::print();
    ann.Employee::print();
    return 0;
}
