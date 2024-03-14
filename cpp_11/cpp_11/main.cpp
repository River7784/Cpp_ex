//
//  main.cpp
//  cpp_11
//
//  Created by 유가람 on 3/14/24.
//

#include <iostream>
using namespace std;

//화씨온도를 섭씨온도로 변환하는 함수
//매개변수  float fahr : 화씨온도
//반환값   섭씨온도(float)
float FahrToC(float fahr){
    return(fahr-32) * 5/9;
}
int main(){
    float fTemp, cTemp;
    
    cout << "Enter n\n";
    cout << "화씨온도 : ";
    cin >> fTemp;
    cTemp = FahrToC(fTemp);     //함수호출
    cout << "---> 섭씨온도 : " << cTemp << endl;
    return 0;
}
