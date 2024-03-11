//
//  main.cpp
//  cpp_08
//
//  Created by 유가람 on 3/11/24.
//

#include <iostream>
using namespace std;

int main(){
    int max;
    int data[10] = {10, 23, 5, 9, 22, 48, 12, 10, 55, 31};
    
    max = data[0]; //data의 0번 값을 max로 가정
    cout << "데이터 : " <<data[0];
    for (int i = 1; i<10; i++){
        cout << " " << data[i];
        if(max < data[i]) max = data[i];
    }
    cout << "\n\n배열의 최댓값 : " << max << endl;
    return 0;
}
