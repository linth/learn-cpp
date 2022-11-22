
#include<iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  long* pnumber;
  long number1 = 11L;
  long number2 = 49L;

  // number1's value.
  pnumber = &number1;
  cout << "number1: " << number1 << "; pointer: " << pnumber << endl;

  // number2's value.
  pnumber = &number2;
  cout << "number2: " << number2 << "; pointer: " << pnumber << endl;

  
  number1 = *pnumber * 10;
  cout << "number1: " << number1 << "; pointer: " << pnumber << endl;

  /**
   * ! result: (重要!!! pointer需要初始化)
   * number1: 11; pointer: 0xb9393ffcd4
   * number2: 49; pointer: 0xb9393ffcd0
   * number1: 490; pointer: 0xb9393ffcd0
  */

  // pointer初始化
  pnumber = &number1;
  cout << "number1: " << number1 << "; number2: " << number2 << "; pointer: " << pnumber << endl;

  /**
   * number1: 11; pointer: 0xabff5ff6e4
   * number2: 49; pointer: 0xabff5ff6e0
   * number1: 490; pointer: 0xabff5ff6e0
   * number1: 490; number2: 49; pointer: 0xabff5ff6e4
  */

  return 0;
}
