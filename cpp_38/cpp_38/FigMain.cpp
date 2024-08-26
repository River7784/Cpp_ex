#include <iostream>
#include <string>
#include "GrAttrib.h"
#include "Figure.h"
#include "Circle.h"
#include "Triangle.h"

GrAttrib curAttrib("검정", "흰색");

void drawFigs(const Figure * const figs[], int n) {
    for (int i = 0; i < n; ++i) {
        figs[i]->draw();
        std::cout << std::endl;
    }
}

int main() {
    Figure *figs[2];
    figs[0] = new Circle(0, 20, 10);
    double v[3][2] = { {0, 0}, {20, 0}, {10, 15} };
    curAttrib.setLineColor("빨강");
    curAttrib.setFillColor("노랑");
    figs[1] = new Triangle(v);
    
    drawFigs(figs, 2);  // 모든 도형 그리기 방법 출력
    
    figs[0]->scale(2);
    figs[1]->move(5, 10);
    drawFigs(figs, 2);
    
    // 메모리 해제
    delete figs[0];
    delete figs[1];
    
    return 0;
}
