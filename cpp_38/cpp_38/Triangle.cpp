#include <string>
#include <iostream>
#include "Triangle.h"

Triangle::Triangle(const double v[3][2]) {
    x1 = v[0][0]; y1 = v[0][1];
    x2 = v[1][0]; y2 = v[1][1];
    x3 = v[2][0]; y3 = v[2][1];
}

// 세 꼭짓점 좌표를 (dx, dy)만큼 이동
void Triangle::move(double dx, double dy) {
    x1 += dx; y1 += dy;
    x2 += dx; y2 += dy;
    x3 += dx; y3 += dy;
}

void Triangle::scale(double s) {
    x1 *= s; y1 *= s;
    x2 *= s; y2 *= s;
    x3 *= s; y3 *= s;
}

void Triangle::draw() const {
    std::cout << "삼각형 그리기" << std::endl;
    std::cout << "꼭짓점 좌표: (" << x1 << ", " << y1 << "), ("
              << x2 << ", " << y2 << "), (" << x3 << ", " << y3 << ")" << std::endl;
    std::cout << "선 색: " << attrib.getLineColor() << ", 내부 색: " << attrib.getFillColor() << std::endl;
}
