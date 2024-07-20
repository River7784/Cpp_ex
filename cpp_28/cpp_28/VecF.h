//
//  VecF.h
//  cpp_28
//
//  Created by 유가람 on 7/20/24.
//

#ifndef VecF_h
#define VecF_h
#include <iostream>
#include <cstring>

class VecF {
    int n;
    float *arr;
    
public:
    VecF(int d, float* a = nullptr) : n{d} {
        arr = new float[d];
        if (a) memcpy(arr, a, sizeof(float) *n);
    }
    ~VecF() {
        delete[] arr;
    }
    VecF add(const VecF& fv) const {
        VecF tmp(n);    //벡터의 덧셈 결과를 저장할 임시 객체
        for(int i = 0; i < n; i++)
            tmp.arr[i] = arr[i] + fv.arr[i];
        return tmp;
    }
    void print() const {
        cout << "[";
        for(int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << "]"
    }
};

#endif /* VecF_h */
