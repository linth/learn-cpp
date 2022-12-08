/**
 * basic structure example.
 *  - 宣告方式
 *  - show data.
 * 
*/
#include <iostream>
#include <stdio.h>

using namespace std;

struct mydata {
  string name;
  string id;
  int math;
  int eng;
} student;


struct mygood {
  string good;
  int cost;
} first = { "cracker", 32 };


int main(int argc, char const *argv[]) {

  // 宣告方式
  struct mydata m = { "name", "id", 100, 100 };
  mydata m2 = { "mydata_2", "f0002", 80, 60 };
  student = { "george", "f001", 90, 80 };
  
  // mydata example.
  cout << "m: " << m.math << endl;
  cout << "m2: " << m2.math << endl;
  cout << "name: " << student.name << endl;

  // mygood example.
  cout << "good name: " << first.good << endl; // good name: cracker
  cout << "good cost: " << first.cost << endl; // good cost: 32

  return 0;
}
