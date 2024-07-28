//
//  main.cpp
//  cpp_32
//
//  Created by 유가람 on 7/27/24.
//

#include <iostream>
#include <cstring>
#include "MyString.h"

MyString::MyString(int s) : len(0), bufSize(s){
    buf = new char[s+1];
    buf[0] = '\0';
}

MyString::MyString() : len(0), bufSize(0){   //생성자
    buf = new char[1];
    buf[0] ='\0';
}

MyString::MyString(const char *str){
    len = bufSize = strlen(str);        //문자열 길이
    buf = new char[len + 1];        //문자열 저장공간 할당
    strcpy(buf, str);               //문자열 복사
}

MyString::MyString(const MyString &mstr):len(mstr.len), bufSize(mstr.bufSize){  //복사 생성자
    buf = new char[len + 1];
    strcpy(buf, mstr.buf);
}

MyString::MyString(MyString &&mstr):len(mstr.len), bufSize(mstr.bufSize), buf(mstr.buf){
    mstr.buf = nullptr;
}

MyString::~MyString(){   //소멸자
    delete[] buf;
}

int MyString::length() const{        //문자열 길이 반환 메서드
    return len;
}

//대입연산자
MyString& MyString::operator=(const MyString &mstr){
    if(bufSize < mstr.len) {        //문자열 공간이 필요한 공간보다 작으면
        delete[] buf;               //기존 공간 반환
        len = bufSize = mstr.len;   //새로운 멸자열의 길이
        buf = new char[len + 1];    //새로운 공간 할당
    }
    else
        len = mstr.len;
    strcpy(buf, mstr.buf);
    return *this;
}

//이동 연산자
MyString& MyString::operator=(MyString &&mstr){
    delete[] buf;
    len = mstr.len;
    bufSize = mstr.bufSize;
    buf = mstr.buf;
    mstr.buf = nullptr;
    return *this;
}


//문자열 연결 연산자
MyString MyString::operator+(const MyString &mstr) const{
    MyString tmstr(len + mstr.len);
    strcpy(tmstr.buf, buf);
    strcpy(tmstr.buf + len, mstr.buf);
    return tmstr;
}

MyString& MyString::operator+=(const MyString &mstr){
    if(bufSize < len + mstr.len){
        bufSize = len += mstr.len;
        char* tbuf = new char[len + 1];
        strcpy(tbuf, buf);
        delete[] buf;
        buf = tbuf;
    }
    strcat(buf, mstr.buf);
    return *this;
}

//관계 연산자 ==
bool MyString::operator==(const MyString &mstr) const{
    return !strcmp(buf, mstr.buf);
}
//관계 연산자 >
bool MyString::operator>(const MyString &mstr) const{
    return strcmp(buf, mstr.buf) > 0;
}
//관계 연산자 <
bool MyString::operator<(const MyString &mstr) const{
    return strcmp(buf, mstr.buf) < 0;
}

char& MyString::operator[](int i){
    return buf[i];
}

char MyString::operator[](<#int i#>) const{
    return buf[i];
}
