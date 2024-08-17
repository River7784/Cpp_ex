//
//  main.cpp
//  cpp_38
//
//  Created by 유가람 on 8/15/24.
//

#include <iostream>
#include <string>
#include "Circle.h"

// 원의 중심 좌표를 (dx, dy)만큼 이동
void Circle::move(double dx, double dy){
    cx += dx;
    cy += dy;
};
