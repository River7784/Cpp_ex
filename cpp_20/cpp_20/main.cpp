//
//  main.cpp
//  cpp_20
//
//  Created by 유가람 on 4/4/24.
//

#include <iostream>
#include "CounterM.h"
using namespace std;

int main(){
    CounterM cnt(9);    //Counter 객체 정의
    
    cout << "계수기의 현재 값 : " << cnt.getValue() << endl;
    for(int i=0; i<12; i++){    //cnt에서 정의한 최댓값인 9가 도달하면 0으로 reset후 다시 반복문
        cnt.count();    //계수기 1증가
        cout << "계수기의 현재 값 : " << cnt.getValue() << endl;
    }
    return 0;
}
