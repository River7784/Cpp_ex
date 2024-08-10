//
//  main.cpp
//  cpp_36
//
//  Created by 유가람 on 8/10/24.
//

#include <iostream>
using namespace std;

class BaseC{
    int a;  //private 멤버
protected:
    int b;  //protected 멤버
public:
    int c;  //public 멤버
    int geta() const {return a;}    // 소속멤버 사용
    void set(int x, int y, int z) { a=x; b=y; c=z; }
};

class Drvd1 : public BaseC{
    // BaseC의 멤버 a는 Drvd1이 액세스 할 수 없음, b는 protected로 취급, c는 public으로 취급(b,c는 액세스 가능)
public:
    //int sum() const { return a+b+c; } //에러남
    void printbc() const { cout << b << '' << c << '\n'; }
};

int main() {
    Drvd1 d1;
    d1.a = 1;   //private 멤버 액세스로 error
    d1.b = 2;   //protected 멤버 액세스로 error
    d1.c = 3;   //public 멤버 액세스로 ok
}
