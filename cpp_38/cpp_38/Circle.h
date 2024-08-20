//
//  Circle.h
//  cpp_38
//
//  Created by 유가람 on 8/17/24.
//

#ifndef Circle_h
#define Circle_h
#include <iostream>
#include "Figure.h"
using namespace std;

class Circle : public Figure {
    double cx, cy;  //원의 중심 좌표
    double radius;  //원의 반경
    
public:
    // 현재 그래픽 속성에 따라 원 객체 생성 . (x,y). 중심 좌표 . r . 반경
    Circle(double x, double y, double r) 
        : cx(x), cy(y), radius(r)
    
    // 원의 이동, 원점 기준 크기 조정, 그리기 멤버함수
    void move(double dx, double dy);
    void scale(double s);
    void draw() const;
};

#endif /* Circle_h */


/*
 
 class Circle : public Figure {
     double cx, cy;  // 원의 중심 좌표
     double radius;  // 원의 반경

 public:
     // 중심 (x, y)와 반경 r로 원을 초기화하는 생성자
     Circle(double x, double y, double r)
         : cx(x), cy(y), radius(r)
     {
         // 생성자 본문 (필요한 경우)
     }

     // 원을 dx, dy 만큼 이동
     void move(double dx, double dy) {
         cx += dx;
         cy += dy;
     }

     // 원을 s 배율만큼 크기 조정
     void scale(double s) {
         if (s > 0) { // 배율이 양수인지 확인
             radius *= s;
         } else {
             cerr << "배율은 양수여야 합니다!" << endl;
         }
     }

     // 원을 그리기 (예시로 세부 사항을 출력)
     void draw() const {
         cout << "원의 중심: (" << cx << ", " << cy << "), 반경: " << radius << endl;
     }
 };
 */
