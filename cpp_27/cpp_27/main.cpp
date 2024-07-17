//
//  main.cpp
//  cpp_27
//
//  Created by 유가람 on 7/17/24.
//

#include <iostream>

VecF& VecF::operator=(const VecF& fv){
    if(n != fv.n) {         //벡터의 크기가 다르면 기존 메모리 반환 후 새로 메모리 할당함
        delete[] arr;
        arr = new float[n = fv.n];
    }
    memcpy(arr, fv.arr,  sizeof(float)*n);  //데이터를 복사함
    
    return *this;
}
