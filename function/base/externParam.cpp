#include<iostream>
#include "param.h"

using namespace std;

static int i = 10; // global variable.

void funOne() {
  cout << "i: " << i << endl; // i: 10

  // code for the function that possibly defines a local i ...
  // solution 1: 使用 extern
  extern int i;

  int k = i;
  cout << "k: " << k << endl; // k: 10
  cout << "age: " << age << endl; // age: 30
  cout << "ccc: " << ccc << endl; // ccc: 5

  // solution 2: 使用 :: 
  int j = ::i + 5;
  cout << "j: " << j << endl; // j: 15
}

int main(int argc, char const *argv[]) {
  
  funOne();

  return 0;
}
