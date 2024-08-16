//
//  Figure.h
//  cpp_38
//
//  Created by 유가람 on 8/16/24.
//

#ifndef Figure_h
#define Figure_h
#include <string>
#include "GrAttrib.h"

class Figure {
protected:
    GrAttrib attrib;    //그래픽 속성
    
public:
    // 현재 그래픽 속성에 따라 도형 객체 생성
    Figure() : attrib(curAttrib) {}
    
    // 선 색 속성 지정
    void setLineColor(const string &c) {
        attrib.setLineColor(c);
    }
    
    // 내부 영역 색 지정
    void setFillColor(const string &c){
        attrib.setFillColor(c);
    }
    
    // 도형의 이동, 원점 기준 크기 조정, 그리기 멤버함수
    virtual void move(double dx, double dy) = 0;
    virtual void scale(double s) = 0;
    virtual void draw() const = 0;
};

#endif /* Figure_h */
