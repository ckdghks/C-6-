#include <iostream>
#include <cstring>
using namespace std;

class Book{
  char* title;
  int price;
  public:
    Book(char* title, int price);
    Book(Book& book); // 복사 생성자  
    ~Book();
    void set(char *title, int price);
    void show() { cout << title << ',' << price << "원" << endl; }
};

Book::Book(char* title, int price) { 
  this->price = price;
  int len = strlen(title);
  this -> title = new char [len+1];  // name 문자열 공간 할당
  strcpy(this->title, title);
}

Book::Book(Book& book) {
  this->price = book.price; // price값 복사
  int len = strlen(book.title);
  this->title = new char [len+1];
  strcpy(this->title, book.title);
  cout << "복사 생성자 실행. 원본 객체의 이름 " << this->title << endl;
}

Book::~Book() {
  if(title)  // 만일 name에 동적 할당된 배열이 있으면
    delete [] title; // 메모리 소멸
}

void Book::set(char* title, int price) { 
  this->price = price;
  strcpy(this->title, title);
}

int main() {
  Book cpp("명품C++", 10000);  //(1) father 객체 생성
  Book java = cpp;  //(2) daughter 객체 복사 생성, 복사생성자 호출
  java.set("명품자바", 12000);
  cpp.show();
  java.show();
}