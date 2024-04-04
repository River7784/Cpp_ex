//
//  CounterM.h
//  cpp_20
//
//  Created by 유가람 on 4/4/24.
//

#ifndef CounterM_h_INCLUDED
#define CounterM_h_INCLUDED

class CounterM{
    const int maxValue;     //계수기 최댓값
    int value;              //private 데이터 멤버
public:                     //public 멤버함수
    CounterM(int mVal) :
    maxValue{
        mVal
    },
    value{
        0
    }{} //생성자
    void reset(){   //계수기 값을 0으로 지움
        value = 0;
    }
    void count(){   //계수기 값을 1 증가시킴
        value = value < maxValue ? value + 1 : 0;
    }
    int getValue() const{   //계수기의 현재 값을 반홤함
        return value;
    }
};

#endif //CounterM_h_INCLUDED
