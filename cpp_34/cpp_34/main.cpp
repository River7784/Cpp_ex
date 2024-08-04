//
//  main.cpp
//  cpp_34
//
//  Created by 유가람 on 8/2/24.
//

#include <iostream>
#include "Person1.h"
#include "Student1.h"
using namespace std;

int main(){
    Person mac;
    mac.setName("Mac");
    Student ann;
    ann.setName("Ann");
    ann.setSchool("Ehwa W Univ");
    
    mac.print();    //기초 클래스 함수 호출
    cout << endl;
    ann.print();    //파생 클래스 함수 호출
    cout << endl;
    ann.Person::print();    //기초 클래스 함수 호출
    cout << endl;
    return 0;
    
}
