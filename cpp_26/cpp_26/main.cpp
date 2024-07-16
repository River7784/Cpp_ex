//
//  main.cpp
//  cpp_26
//
//  Created by 유가람 on 7/16/24.
//

#include <iostream>

ostream& operator<<(ostream& os, const Complex2& c){
    os << "(" << c.rPart    //실수부출력
    if(c.iPart > 0)
        os << "+j" << c.iPart;
    else if(c.iPart < 0)
        os << "-j" << -c.iPart;
    cout << ")";
    return os;
}
