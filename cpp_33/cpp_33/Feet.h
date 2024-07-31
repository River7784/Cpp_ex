//
//  Feet.h
//  cpp_33
//
//  Created by 유가람 on 7/31/24.
//

#ifndef Feet_h
#define Feet_h
#include <iostream>
#include "Meter.h"

class Feet {
    int ft; //피트
    int in; //인치
public:
    Feet() : ft(0), in(0) {}                //생성자
    Feet(int f, int i) : ft(f), in(i) {}    //생성자
    Feet(const Meter &m){
        //m를 센티미터 단위로 변환
        int cmeter = m.getM() * 100 + m.getCm();
        // 인치로 변환해서 반올림함
        in = static_cast<int>(cmeter / 2.54 + 0.5);
        ft = in /12;
        in %= 12;
    }
    operator Meter() const {
        int m = static_cast<int>((ft * 12 + in) * 2.54 + 0.5);
        return Meter(m / 100, m % 100);
    }
    void display() const {
        if(ft)
            cout << ft << "ft ";
        if( in || !ft)
            cout << in << "in";
        cout << endl;
    }
};

#endif /* Feet_h */
