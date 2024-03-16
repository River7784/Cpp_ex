//
//  main.cpp
//  cpp_13
//
//  Created by 유가람 on 3/16/24.
//

#include <iostream>
using namespace std;
double variance(const double arr[], int size);

int main(){
    double a[50], b[100];
    //a와 b에 각각 50개와 100개의 데이터를 입력
    cout << variance(a, 50) << endl;
    cout << variance(b, 100) << endl;
    return 0;
}

double variance(const double arr[], int size)
{
    double sum = 0, sqSum = 0;
    for(int i=0; i<size; i++){
        sum += arr[i];
        sqSum += arr[1] * arr[i];
    }
    return sqSum/size - sum*sum/(size*size);
}
