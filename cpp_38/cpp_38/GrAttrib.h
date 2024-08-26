#ifndef GRATTRIB_H
#define GRATTRIB_H

#include <string>

class GrAttrib {
    std::string lineColor;   // 선 색 속성
    std::string fillColor;   // 내부 영역 색 속성
    
public:
    // 그래픽 속성 객체 생성자
    GrAttrib() : lineColor("검정색"), fillColor("흰색") {}
    GrAttrib(const std::string &lc, const std::string &fc) : lineColor(lc), fillColor(fc) {}
    
    // 속성 지정 멤버 함수
    void setLineColor(const std::string &lc) {
        lineColor = lc;
    }
    void setFillColor(const std::string &fc) {
        fillColor = fc;
    }
    
    // 속성 값을 읽는 멤버 함수
    std::string getLineColor() const {
        return lineColor;
    }
    std::string getFillColor() const {
        return fillColor;
    }
};

extern GrAttrib curAttrib;  // 현재 속성을 나타내는 전역 객체

#endif /* GRATTRIB_H */
