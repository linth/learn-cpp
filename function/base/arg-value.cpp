#include<iostream>
#include<iomanip>

using namespace std;

double changeIt(double it);

/**
 * 傳遞引數給函數
*/
int main(int argc, char const *argv[]) {
  
  double it = 5.0;
  double result = changeIt(it);

  cout << "After function: it = " << it << endl;
  cout << "Result return is: " << result << endl;

  /**
   * ! result:
   * Within function, it = 15 
   * After function: it = 5
   * Result return is: 15
  */

  return 0;
}

double changeIt(double it) {
  it += 10.0;
  cout << endl << "Within function, it = " << it << endl;

  return it;
}