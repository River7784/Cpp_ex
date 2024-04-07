//
//  PrsnMain.cpp
//  cpp_21
//
//  Created by 유가람 on 4/7/24.
//

#include <stdio.h>
#include "Person.h"
using namespace std;

int main(){
    Person *p1 = new Person("유가람", "서울시 양천구");
    Person *p2 = new Person("River", "서울시 종로구");
    p1 -> print();
    p2 -> print();

    p2 -> chAddr("서울시 강남구");
    p2 -> print();
    delete p1;
    delete p2;
    return 0;
};
