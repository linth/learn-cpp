/**
 * 使用struct當引數到 function.
 *  - base
 *  - 只需要傳遞必要的 struct 欄位
 *  - 傳遞 struct 的位址
 * 
*/

#include <iostream>
// #include 

using namespace std;

struct myIdCard {
  string name;
  int age;
};

struct mydata {
  string name;
  int math;
  int eng;
};

void func(struct myIdCard);
void change(struct mydata *);
bool isAdult(myIdCard mic);
float avg(int, int);


int main(int argc, char const *argv[]) {
  // example 1: 使用struct當引數到 function.
  myIdCard mic1 = { "gg", 12 };
  myIdCard mic2 = { "JJ", 26 };

  func(mic1);
  cout << isAdult(mic1) << endl;
  func(mic2);
  cout << isAdult(mic2) << endl;
  
  /**
   * !result:
   * name: gg; age: 12
   * 0
   * name: JJ; age: 26
   * 1
  */

  // example 2: 只需要傳遞必要的 struct 欄位
  mydata m = { "george", 100, 90 };
  mydata m2 = { "nana", 50, 100 };
  mydata m3 = { "haha", 90, 71 };

  cout << m.name << " get avg value: " << avg(m.math, m.eng) << endl;
  cout << m2.name << " get avg value: " << avg(m2.math, m2.eng) << endl;
  cout << m3.name << " get avg value: " << avg(m3.math, m3.eng) << endl;

  /**
   * !result:
   * george get avg value: 95
   * nana get avg value: 75
   * haha get avg value: 80.5
  */


  // example 3: 傳遞 struct 的位址
  cout << "(before) math:" << m.math << ", eng: " << m.eng << endl;
  change(&m);

  return 0;
}

float avg(int a, int b) {
  return (float) (a+b)/2;
}

void func(struct myIdCard mic) {
  cout << "name: " << mic.name << "; age: " << mic.age << endl;
}

bool isAdult(myIdCard mic) {
  if (mic.age >= 18) {
    return true;
  }
  return false;
}

void change(struct mydata *ptr) {
  // change math and eng score.
  int temp;
  temp = ptr->math;
  ptr->math = ptr->eng;
  ptr->eng = temp;

  cout << "(after) math:" << ptr->math << ", eng: " << ptr->eng << endl;
  return;
}