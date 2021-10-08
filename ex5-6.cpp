/*
#include <iostream>
using namespace std;

class Circle{
  private:
    int radius;
  public:
    Circle();
    Circle(int r);
    ~Circle();
    void setRadius(int radius) { this -> radius = radius; }
    double getArea() { return 3.14*radius*radius; }
    int getRadius() { return radius; }
};

Circle::Circle() {
  radius = 1;
  cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int radius) {
  this -> radius = radius;
  cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() {
  cout << "소멸자 실행 radius = " << radius << endl;
}

void increaseCircle(Circle &c) {  // 참조 매개 변수 c
  int r = c.getRadius();
  c.setRadius(r+1);
}

int main() {
  Circle waffle(30);  
  increaseCircle(waffle); // 참조에 의한 호출
  cout << waffle.getRadius() << endl; 
}

//생성자 실행 radius = 30 <= waffle 객체 생성
//31
//소멸자 실행 radius = 31 <=  객체 소멸
*/