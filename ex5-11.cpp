/*
#include <iostream>
#include <cstring>
using namespace std;

class Person{
  char* name;
  int id;
  public:
    Person(int id, char* name);
    Person(Person& person); // 복사 생성자  
    ~Person();
    void changeName(char *name);
    void show() { cout << id << ',' << name << endl; }
};

Person::Person(int id, char* name) { 
  this->id = id;
  int len = strlen(name);
  this -> name = new char [len+1];  // name 문자열 공간 할당
  strcpy(this->name, name);
}

Person::Person(Person& person) {
  this->id = person.id; // id값 복사
  int len = strlen(person.name);
  this->name = new char [len+1];
  strcpy(this->name, person.name);
  cout << "복사 생성자 실행. 원본 객체의 이름 " << this->name << endl;
}

Person::~Person() {
  if(name)  // 만일 name에 동적 할당된 배열이 있으면
    delete [] name; // 메모리 소멸
}

void Person::changeName(char* name) { // 이름 변경
  if(strlen(name) > strlen(this->name))
    return;
  strcpy(this->name, name);
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