
#include<iostream>

using namespace std;


int main(int argc, char const *argv[]) {
  
  /**
   * 1) if the parameter wants to get the address of value, you can ues `&parameter`.
   * 
   * 2) if the pointer wants to get the value of parameter, you can use `*pointer`.
  */

  int number = 0; // value
  int* pnumber = &number; // addres

  cout << "the address of number: " << pnumber << "; value: " << *pnumber << endl;

  int* pint = 0; // pointer not pointing to anything.
  cout << pint << endl; // 0

  // two ways to check the pointer is null or not.
  if (pint == 0) {
    cout << endl << "pint is null";
  }

  if (!pint) {
    cout << endl << "pint is null";
  }

  return 0;
}


