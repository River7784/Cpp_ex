//
//  main.cpp
//  cpp_35
//
//  Created by 유가람 on 8/5/24.
//

#include <iostream>
#include "Person2.h"
#include "Student2.h"
using namespace std;

int main(){
    Student mac("Mac", "univ");
    cout << mac.getName() << " goes to "
    << mac.getSchool() << endl;
    return 0;
}
