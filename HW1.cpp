/*
#include <iostream>
using namespace std;

class Circle{
    int radius;
  public:
    Circle() { radius = 1; };
    Circle(int radius) { this -> radius = radius; }
    void setRadius(int radius) { this -> radius = radius; }
    double getArea() { return 3.14*radius*radius; }
};

// 키보드로 부터 반지름 값을 읽어 객체에 반지름을 설정
void readRadius(Circle& c) { 
  int r;
  cout << "정수 값으로 반지름을 입력하세요>>";
  cin >> r;
  c.setRadius(r);
}

int main() {
  Circle donut; // 객체가 생성된다. radius=1로 초기화된다.
  readRadius(donut);
  cout << "donut의 면적 = " << donut.getArea() << endl;
}
*/