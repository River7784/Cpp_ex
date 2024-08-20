//
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
}

// 좌표 원점을 기준으로 s배 크기 조정
void Circle::scale(double s){
    cx *= s;
    cy *= s;
    radius *= s;
}

void Circle::draw() const {
    cout << "원 그리기" << endl;
    cout << "(" << cx << ", " << cy << ")에서부터 ";
    cout << radius << "만큼 떨어진 모든 점들을 ";
    cout << attrib.getLineColor() << "으로 그리고" << endl;
    cout << "내부를 " << attrib.getFillColor();
    cout << "으로 채운다." << endl;
}
