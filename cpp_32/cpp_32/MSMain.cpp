//
//  MSMain.cpp
//  cpp_32
//
//  Created by 유가람 on 7/29/24.
//

#include <stdio.h>
#include "MyString.h"
using namespace std;

int main(){
    MyString str1("MyString class");
    MyString str2("Object Oriented ");
    MyString str3;
    
    cout << str1 << endl;       //문자열 출력
    str3 = "Programming";       //문자열 대입: 묵시적 형변환 및 이동 대입
    cout << str3 << "의 문자열 길이는 ";
    
    cout << str3.length() << endl;  //문자열 길이를 구하는 메소드
    
    str1 = str2;
    cout << str1 << endl;
    
    str1 = str2 + str3;
    cout << str1 << endl;
    
    MyString str4(str3);
    cout << str4 << endl;
    
    str2 += "Programming";
    cout << str2 << endl;
    
    str2[6] = '-';
    cout << str2 << endl;

    return 0;
}
