/*
#include <iostream>
#include <string>
using namespace std;

class Person{
  string name;
  int id;
  public:
    Person(int id, string name);
    ~Person();
    void changeName(string name);
    void show() { cout << id << '.' << name << endl; }
};

Person::Person(int id, string name) { 
  this->id = id;
  
  //int len = strlen(name);
  //this -> name = new char [len+1];  // name 문자열 공간 할당
  //strcpy(this->name, name);
  this-> name = name;
}

Person::~Person() {
  //if(name)  // 만일 name에 동적 할당된 배열이 있으면
  //  delete [] name; // 메모리 소멸
}

void Person::changeName(string name) { // 이름 변경
  //if(strlen(name) > strlen(this->name))
  //  return;
  //strcpy(this->name, name);
  this-> name = name;
}

int main() {
  Person father(1, "Kitae");  //(1) father 객체 생성 
  Person daughter(father);  //(2) daughter 객체 복사 생성, 복사생성자 호출

  cout << "daughter 객체 생성 직후 ----" << endl;
  father.show();  //(3) father 객체 출력
  daughter.show();  //(3) daughter 객체 출력

  daughter.changeName("Grace"); //(4) daughter의 이름을 "Grace"로 변경
  cout << "daughter 이름을 Grace로 변경한 후 ----" << endl;
  father.show();  // (5)  father 객체 출력
  daughter.show();  //(5) daughter 객체 출력

  return 0; //(6), (7) daughter, father 객체 소멸
}
*/