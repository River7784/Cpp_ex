//
//  MyString.h
//  cpp_32
//
//  Created by 유가람 on 7/27/24.
//

#ifndef MyString_h
#define MyString_h
#include <iostream>

class MyString {
    int len;
    int bufSize;
    char *buf;
    MyString(int s);    //생성자
public:
    MyString();
    MyString(const char *str);
    MyString(const MyString &mstr); //복사 생성자
    MyString(MyString &&mstr);      //이동 생성자
    ~MyString();        //소멸자
    int length() const; //문자열 길이 반환 메소드
    MyString& operator=(const MyString &mstr);  //대입 연산자
    MyString& operator=(MyString &&mstr);   //이동 연산자
    MyString operator+(const MyString &mstr) const;
    MyString& operator+=(const MyString &mstr);
    
    bool operator==(const MyString &mstr) const;    //==연산자
    bool operator>(const MyString &mstr) const;     //>연산자
    bool operator<(const MyString &mstr) const;     //<연산자
    char& operator[](int i);
    char operator[](int i) const;
    friend std::ostream& operator<<(std::ostream &os, const MyString &mstr);
};

//스트림출력 연산자
inline std::ostream& operatot<<(std::ostream &os, const MyString &mstr){
    os << mstr.buf;
    return os;
}

#endif /* MyString_h */
