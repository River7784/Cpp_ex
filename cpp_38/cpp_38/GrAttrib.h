//
//  GrAttrib.h
//  cpp_38
//
//  Created by 유가람 on 8/15/24.
//

#ifndef GrAttrib_h
#define GrAttrib_h
#include <string>
using namespace std;

class GrAttrib {
    string lineColor;   //선 색 속성
    string fillColor;   //내부 영역 색. ㅗㄱ성
    
public:
    //그래픽 속성 객체 생성자
    GrAttrib() : lineColor("검정색"), fillColor("흰색"){}
    GrAttrib(const string &lc, const string &fc) : lineColor(lc), fillColor(fc) {}
    
    //속성 지정 멤버함수
    void setLineColor(const string &lc){
        lineColor = lc;
    }
    void setFillColor(const string &fc){
        fillColor = fc;
    }
    
    //속성 값을 읽는 멤버함수
    string getLineColor() const {
        return lineColor;
    }
    string getFillColor() const {
        return fillColor;
    }
};

extern GrAttrib curAttrib;  //현재 속성을 나타내는 전역 객체
#endif /* GrAttrib_h */
