//
//  SBinding.cpp
//  cpp_37
//
//  Created by 유가람 on 8/14/24.
//

#include <stdio.h>
#include "Person.h"
#include "Student.h"
using namespace std;

int main(){
    Person *p1 = new Person("Mac");
    p1 -> print();  //Person::print() 호출
    cout << endl;
    
    Person *p2 = new Student("Ann", "Ewha W Univ");
    p2 -> print();
    cout << endl;   //Person::print() 호출
    ((Student *)p2) -> print(); //Student::print() 호출
    cout << endl;
    return 0;
}
