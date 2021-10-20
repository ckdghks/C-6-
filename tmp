//프로젝트 >> 속성 >> C/C++ >> 고급 >> 특정 경고 사용 안함 >> 4996. 
#include <iostream>
#include <cstring>
using namespace std;
//#progma warning (disable: 49996)

class Book {
    char* title;
    int price;
public:
    Book(char* title, int price);
    Book(Book& book); // 복사 생성자  
    ~Book();
    void set(char* title, int price);
    void show() { cout << title << ',' << price << "원" << endl; }
};

Book::Book(char* title, int price) {
    this->price = price;
    int len = strlen(title);
    this->title = new char[len + 1];  
    strcpy(this->title, title);
}

Book::Book(Book& book) {
    this->price = book.price; // price값 복사
    int len = strlen(book.title);
    this->title = new char[len + 1];
    strcpy(this->title, book.title);
    cout << "복사 생성자 실행. 원본 객체의 이름 " << this->title << endl;
}

Book::~Book() {
    if (title)  
        delete[] title; // 메모리 소멸
}

void Book::set(char* title, int price) {
    this->price = price;
    strcpy(this->title, title);
}

int main() {
    Book cpp("명품C++", 10000);  
    Book java = cpp;  
    java.set("명품자바", 12000);
    cpp.show();
    java.show();
}