//
//  Pencils.h
//  cpp_25
//
//  Created by 유가람 on 7/14/24.
//

#ifndef Pencils_h
#define Pencils_h
class Pencils {
    int dozens;
    int np;
public:
    Pencils() : dozens(0), np(0) {};
    Pencils(int n)
        {
        dozens = n / 12; np = n % 12;
        }
    Pencils(int d, int n) : dozens(d), np(n) {}
    Pencils& operator++();
    Pencils operator++(int);
    void display() const;
};

#endif /* Pencils_h */
