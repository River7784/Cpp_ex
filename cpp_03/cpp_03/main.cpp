//
//  main.cpp
//  cpp_03
//
//  Created by 유가람 on 2/14/24.
//

#include <iostream>
using namespace std;

int main(){
    const double PI{3.14159};
    double radius;
    
    cout << "원의 반경을 입력해주세요 :";
    cin >> radius;
    double area = radius * radius * PI;
    cout << "원의 면적 = " << area << endl;
    return 0;
}
