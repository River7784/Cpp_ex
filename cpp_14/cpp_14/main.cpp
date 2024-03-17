//
//  main.cpp
//  cpp_14
//
//  Created by 유가람 on 3/17/24.
//

#include <iostream>
using namespace std;
void SwapValues(int &x, int &y);    //원형

int main(){
    int a, b;
    cout << "두 수를 입력하십시오 : ";
    cin>>a>>b;
    if(a < b) SwapValues(a, b);     //순서를 바꿔 a에 큰 값을 넣는다.
    cout << "큰 수 = " << a << "작은 수 = " << b << endl;
    return 0;
}

// 두 변수의 값을 바꾸는 함수
// 인수 int &x, int &y : 값을 바꿀 변수
// 반환값 없음
void SwapValues(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

