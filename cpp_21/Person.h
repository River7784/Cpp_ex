//
//  Person.h
//  cpp_21
//
//  Created by 유가람 on 4/7/24.
//

#ifndef Person_h
#define Person_h
class Person{
    char *name;  //이름을 저장하는 데이터 멤버
    char *addr;  //주소를 저장하는 데이터 멤버
public:
    Person(const char *name, const char *addr); //생성자
    ~Person();
    void print() const;     //이름과 주소 출력하기
    void chAddr(const char *newAddr);   //주소 변경
};
#endif /* Person_h */
