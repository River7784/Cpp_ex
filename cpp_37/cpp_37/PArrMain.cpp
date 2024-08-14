//
//  main.cpp
//  cpp_37
//
//  Created by 유가람 on 8/11/24.
//

#include <iostream>
#include "Person.h"
#include "Student.h"
using namespace std;

void PrintPerson(const Person * const p[], int n){
    for(int i = 0; i < n; i++){
        p[i] -> print();
        cout << endl;
    }
}

int main(){
    Person mac("Mac");
    Student ann("Ann", "Ewha W Univ");
    Student aa("AA", "aa Univ");
    
    mac.print();
    cout << endl;
    
    ann.print();
    cout << endl << endl;
    
    Person *pPerson[3];
    pPerson[0] = &mac;
    pPerson[1] = &ann;
    pPerson[2] = &aa;
    PrintPerson(pPerson, 3);
    
    return 0;
}
