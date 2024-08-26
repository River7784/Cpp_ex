#include <iostream>
#include <string>
#include "Circle.h"

// 원의 중심 좌표를 (dx, dy)만큼 이동
void Circle::move(double dx, double dy) {
    cx += dx;
    cy += dy;
}

// 좌표 원점을 기준으로 s배 크기 조정
void Circle::scale(double s) {
    cx *= s;
    cy *= s;
    radius *= s;
}

void Circle::draw() const {
    std::cout << "원 그리기" << std::endl;
    std::cout << "중심 좌표: (" << cx << ", " << cy << "), 반경: " << radius << std::endl;
    std::cout << "선 색: " << attrib.getLineColor() << ", 내부 색: " << attrib.getFillColor() << std::endl;
}
