/*
#include <iostream>
using namespace std;


char& find(char s[], int index) { 
  return s[index];  // 참조 리턴
}

int main() {
  char name[] = "Mike";
  cout << name << endl; 

  find(name, 0) = 'S';  // name[0] = 'S'로 변경
  cout << name << endl; 

  char& ref = find(name, 2);  // ret는 name[2] 참조
  ref = 't';  // name = "Site"
  cout << name << endl; 
}
*/