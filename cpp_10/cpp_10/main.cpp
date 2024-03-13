//
//  main.cpp
//  cpp_10
//
//  Created by 유가람 on 3/13/24.
//

#include <iostream>
using namespace std;

int main(){
    char str[14] = "Hello, world";
    char *pt;
    
    cout << str << endl;
    pt = str;   //pt가 배열 str를 가르킴
    while(*pt){ //문자열의 끝이 아니면 반복
        if(*pt >= 'a' && *pt <= 'z')    //소문자인 경우
            *pt = *pt - 'a' + 'A';      //대문자로 변환
        pt++;   //다음문자 포인터로 이동
    }
    cout << str << endl;
    return 0;
}
