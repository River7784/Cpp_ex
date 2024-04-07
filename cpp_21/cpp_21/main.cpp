//
//  main.cpp
//  cpp_21
//
//  Created by 유가람 on 4/7/24.
//

#include <iostream>
#include <cstring>
#include "Person.h"
using namespace std;

Person::Person(const char *name, const char *addr){
    //이름 저장할 공간 할당
    this->name = new char[strlen(name)+1];
    //데이터 멤버 name에 이름 복사
    strcpy(this->name, name);
    //주소 저장할 공간 할당
    this->addr = new char[strlen(addr)+1];
    //데이터 멤버 addr에 주소 복사
    strcpy(this->addr, addr);
    cout << "Person 객체 생성함(" << name << ")" << endl;
}

Person:: ~Person() //소멸자
{
    cout << "Person 객체 제거함(" << name << ")" << endl;
    delete [] name;
    delete [] addr;
}

void Person::print() const{
    cout << addr << "에 사는 " << name << "입니다." << endl;
}

void Person::chAddr(const char *newAddr){
    delete [] addr; //기존 공간반납
    // 새로운 주소에 맞는 공간 할당
    addr = new char[strlen(newAddr)+1];
    strcpy(addr, newAddr);
}
