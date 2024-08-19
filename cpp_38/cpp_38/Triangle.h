//
//  Triangle.h
//  cpp_38
//
//  Created by 유가람 on 8/19/24.
//

#ifndef Triangle_h
#define Triangle_h
#include <iostream>
#include "Figure.h"
using namespace std;

class Trianlge : public Figure {
    double x1, y1, x2, y2, x3, y3;
    
public:
    Triangle(const double v[3][2]);
    
    void move(double dx, double dy);
    void scale(double s);
    void draw() const;
};

#endif /* Triangle_h */
