//
//  SwapFT.h
//  cpp_43
//
//  Created by 유가람 on 9/18/24.
//

#ifndef SwapFT_h
#define SwapFT_h
#include <utility>
using namespace std;
template <typename ANY>
void swapFT(ANY &a, ANY &b){
    ANY temp = move(a);
    a = move(b);
    b = move(temp);
}

#endif /* SwapFT_h */
