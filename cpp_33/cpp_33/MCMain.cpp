//
//  main.cpp
//  cpp_33
//
//  Created by 유가람 on 7/30/24.
//

#include <iostream>
#include "Meter.h"
#include "Feet.h"

int main(){
    Meter mLen;
    Feet fLen(10,5);
    mLen = fLen;   //송신 측 클래스에 정의된 형변
    fLen.display();
    mLen.display();
    fLen = mLen;    //수신 측 클래스에 정의된 형변
    fLen.display();
    return 0;
}
