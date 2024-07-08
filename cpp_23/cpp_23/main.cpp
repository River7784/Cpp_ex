//
//  main.cpp
//  cpp_23
//
//  Created by 유가람 on 7/8/24.
//
#include <iostream>


class IntClass1 {
    int a;
public:
    IntClass1(int n = 0) : a(n) {} // 생성자

    IntClass1& operator++() { // 전위 표기 ++ 연산자 다중 정의
        ++a;
        return *this;
    }

    int getValue() const { // getValue 함수 정의
        return a;
    }
};

int main() {
    IntClass1 obj(5); // 5로 초기화된 객체 생성
    ++obj; // 전위 증가 연산자 호출
    std::cout << "Value: " << obj.getValue() << std::endl; // 값 출력

    return 0;
}
