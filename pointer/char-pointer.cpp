#include<iostream>

using namespace std;


int main(int argc, char const *argv[]) {
  
  const char* pstr = "hello world.";
  const char* pstr2 = "good job.";
  const char* pstr3 = "This is a pen.";
  const char* pstr4 = "Hi, everyone.";
  const char* pstr5 = "good to know.";

  cout << pstr << endl; // hello world.
  cout << pstr2 << endl; // good job.
  cout << pstr3 << endl; // This is a pen.
  cout << pstr4 << endl; // Hi, everyone.
  cout << pstr5 << endl; // good to know.

  cout << pstr << endl;
  pstr = 0;
  
  pstr = pstr2;
  cout << "pstr: " << pstr << "; first address of pointer: " << *pstr << "; value: " << &pstr << endl; // pstr: good job.; first address of pointer: g; value: 0x89611ff858


  return 0;
}
