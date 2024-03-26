//
//  Counter.h
//  cpp_19
//
//  Created by 유가람 on 3/26/24.
//

#ifndef COUNTER_H_INCLUDED  // Counter.h가 중복 include되지 않았는지 검사

#define COUNTER_H_INCLUDED  // Counter.h가 처음 include될 떄 정의됨


class Counter {
    int value;
    
    public:
    void reset(){
        value = 0;
    }
    void count(){
        ++value;
    }
    int getValue() const{
        return value;
    }
};

#endif  //  COUNTER_H_INCLUDED
