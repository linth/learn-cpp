#include<iostream>
#include<stdio.h>

using namespace std;

void getOneArg(int argc) {
  cout << argc << endl;
}

void getOneArgv(char** argv) {
  cout << argv << endl;
}

int main(int argc, char const *argv[]) {

  cout << argc << endl;
  cout << argv << endl;
  

  return 0;
}
