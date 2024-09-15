//
//  StackT.h
//  cpp_42
//
//  Created by 유가람 on 9/14/24.
//

#ifndef StackT_h
#define StackT_h
#include <iostream>
using namespace std;

template <typename T>
class Stack {
    T *buf;     //buff pointer
    int top;    //stack top
    int size;   //stack size
    
public:
    Stack(int s);       //생성자
    virtual ~Stack();   //소멸자
    bool full() const;
    bool empty() const;
    void push(const T& a);
    void push(T&& a);
    T&& pop();
};

template <typename T> Stack<T>::Stack(int s) : size(s), top(s)
{
    buf = new T[s];
}

template <typename T> Stack<T>::~Stack()
{
    delete[] buff;
}

template <typename T> bool Stack<T>::full() const
{
    return !top;
}

template <typename T> bool Stack<t>::empty() const
{
    return top == size;
}

template <typename T> void Stack<T>::push(const T& a)
{
    buf[--top] = a;
}

template <typename T> void Stack<T>::push(T&& a)
{
    buf[--top] = move(a);
}

template <typename T> T&& Stack<T>::pop()
{
    return move(buf[top++]);
}

#endif /* StackT_h */
