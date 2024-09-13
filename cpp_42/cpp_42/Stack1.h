//
//  Stack1.h
//  cpp_42
//
//  Created by 유가람 on 9/13/24.
//

#ifndef Stack1_h
#define Stack1_h
typedef int STACK_ITEM;
class Stack {
    enum { MAXSTACK = 20 };
    int top;
    STACK_ITEM item[MAXSTACK];
    
public:
    Stack();    //생성자
    bool empty();
    bool full();
    void initialize();
    void push(STACK_ITEM s);
    STACK_ITEM pop();
};

#endif /* Stack1_h */
