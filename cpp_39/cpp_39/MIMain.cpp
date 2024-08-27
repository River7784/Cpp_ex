//
//  MIMain.cpp
//  cpp_39
//
//  Created by 유가람 on 8/27/24.
//

#include "MIParttime.h"

int main(){
    Parttime chulsoo("ABC Univ", "DEF Co.");
    chulsoo.printSchool();  //Student의 멤버함수 호출
    chulsoo.printCompany(); //Employee의 멤버함수 호출
    
    return 0;
}
