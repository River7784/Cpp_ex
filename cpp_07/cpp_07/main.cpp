//
//  main.cpp
//  cpp_07
//
//  Created by 유가람 on 2/26/24.
//

#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.141593;
struct C2dType{
    double x, y;
};

class CircleClass {
    C2dType center;
    double radius;
    
public:
    void init(double cx, double cy, double r){
        center.x = cx;
        center.y = cy;
        radius = r;
    }
    
    double area() const {
        return radius * radius * PI;
    }
    bool chkOverlap(const CircleClass& c) const {
        double dx = center.x - center.x;
        double dy = center.y - center.y;
        double dCntr = sqrt(dx*dx + dy*dy);
        return dCntr < radius + c.radius;
    }
    
    void display() const {
        cout << "중심 : (" << center.x << "," << center.y << ")";
        cout << "반경 : " << radius << endl;
    }
};
