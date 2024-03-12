//
//  main.cpp
//  cpp_09
//
//  Created by 유가람 on 3/12/24.
//

#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr;
    
    ptr = &a;   //ptr에 a의 값을 넣음
    cout << "ptr이 가르키는 값 : " << *ptr << endl;
    *ptr = 20;
    cout << "변수 a의 값 : " << a << endl;
    return 0;
}
