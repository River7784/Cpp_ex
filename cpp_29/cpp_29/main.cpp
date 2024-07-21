//
//  main.cpp
//  cpp_29
//
//  Created by 유가람 on 7/21/24.
//

#include <iostream>

class SafeIntArray {
    int limit;      //원소의 개수
    int *arr;       //데이터 저장공간
public:
    SafeIntArray(int n) : limit(n) {
        arr = new int[n];
    }
    ~SafeIntArray() {
        delete [] arr;
    }
    int size() const { return limit; }
    int element(int i){
        if(i < 0 || i >= limit) {
            cout << "첨자가 번위를 벗어나 프로그램을 종료합니다.";
            exit(EXIT_FAILURE);
        }
        return arr[i];      //i번째 원소의 값 반환
    }
};
