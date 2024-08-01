//
//  Meter.h
//  cpp_33
//
//  Created by 유가람 on 7/30/24.
//

#ifndef Meter_h
#define Meter_h
#include <iostream>
using namespace std;

class Meter {
    int m;
    int cm;
    
public:
    //생성자
    Meter() : m(0), cm(0) {}
    Meter(int meter, int cmeter) : m(meter), cm(cmeter) {}
    void display() const {
        if(m)
            cout << m << "m ";
        if(cm|| !m)
            cout << cm << "cm";
        cout << endl;
    }
    int getM() const{return m;} //  데이터멤버 m 반환
    int getCm() const{return cm;}   // 데이터 멤버 cm 반환
};

#endif /* Meter_h */
