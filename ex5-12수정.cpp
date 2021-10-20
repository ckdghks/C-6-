/*
#include <iostream>
//#include <cstring>
#include <string>
using namespace std;

class Person{
  string name;
  int id;
  public:
    Person(int id, string name);
    Person(Person& person); // 복사 생성자  
    ~Person();
    void changeName(string name);
    void show() { cout << id << ',' << name << endl; }
};

Person::Person(int id, string name) { 
  this->id = id;
  //int len = len(name);
  //this -> name = new char [len+1];  // name 문자열 공간 할당
  this->name = name;
}

Person::Person(Person& person) {
  this->id = person.id; // id값 복사
  //int len = strlen(person.name);
  //this->name = new char [len+1];
  this->name = person.name;
  //strcpy(this->name, person.name);
  cout << "복사 생성자 실행. 원본 객체의 이름 " << this->name << endl;
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

void f(Person person) {
  person.changeName("dummy");
  person.show();
}

Person g() {
  Person mother(2, "Jane");
  return mother;
}

int main() {
  Person father(1, "Kitae");   //(1) father 객체 생성
  Person son = father;  //(2) daughter 객체 복사 생성, 복사생성자 호출
  cout << "son은 "; 
  son.show();
  
  cout << "f()함수 실행" << endl;
  f(father);
  
  cout << "f()이후 father는 ";
  father.show();
  
  cout << "g()함수 실행." << endl;
  g().show();
}
*/