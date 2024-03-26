//
//  main.cpp
//  cpp_19
//
//  Created by 유가람 on 3/26/24.
//

#include <iostream>
#include "Counter.h"
using namespace std;

int main(){
    Counter cnt;    //Counter 객체의 정의
    cnt.reset();
    cout << "계수기의 현재 값:" << cnt.getValue() << endl;
    cnt.count();
    cnt.count();
    cout << "계수기의 현재 값:" << cnt.getValue() << endl;
    return 0;
}
