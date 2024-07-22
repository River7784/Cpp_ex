//
//  SafeIntArray.h
//  cpp_30
//
//  Created by 유가람 on 7/22/24.
//

#ifndef SafeIntArray_h
#define SafeIntArray_h
#include <iostream>
class SafeIntArray {
    int limit;  //원소의 갯수
    int *arr;   //데이터 저장공간
public:
    SafeIntArray(int n) : limit(n) {
        arr = new int[n];  //공간 할당
    }
    ~SafeIntArray(){
        delete[] arr;
    }
    int size() const { return limit; }  //i번째 원소를 반환하는 멤버함수
    int& operator[](int i) {
        if (i < 0 || i >= limit) {
            std::cout << "첨자가 범위를 벗어나 프로그램을 종료합니다.";
            exit(EXIT_FAILURE);
        }
        return arr[i];  //i번째 원소의 값 반환
    }
    int operator[](int i) {
        if (i < 0 || i >= limit) {
            std::cout << "첨자가 범위를 벗어나 프로그램을 종료합니다.";
            exit(EXIT_FAILURE);
        }
        return arr[i];  //i번째 원소의 값 반환
    }
};
#endif /* SafeIntArray_h */
