//
//  main.cpp
//  cpp_25
//
//  Created by 유가람 on 7/14/24.
//

#include <iostream>
#include "../Pencils.h"
using namespace std;

Pencils& Pencils::operator++(){
    if(++np >= 12)  //낱개를 1 증가, 결과가 12보다 크면 타 수를 1증가, 낱개는 0증가된 결과 반환
        static_cast<void>(++dozens), np = 0;
    return *this;
}

Pencils Pencils::operator++(int) {
    Pencils tmp(*this);     //현 객체 보존
    if(++np >= 12)
        static_cast<void>(++dozens), np = 0;
    return tmp;     //보존된 객체 반환
}

void Pencils::display() const{
    if(dozens) {
        cout << dozens << "타";
        if(np) cout << np << "자루";
        cout << endl;
    }
    else
        cout << np << "자루" <<endl;
}
