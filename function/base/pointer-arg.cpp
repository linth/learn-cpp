/**
 * 傳遞指標給函數
*/

#include<iostream>
#include<iomanip>

using namespace std;


double changeIt(double* pointer_to_it);


int main(int argc, char const *argv[]) {
  double it = 5.0;
  double result = changeIt(&it);

  cout << "After function: it = " << it << endl;
  cout << "Result return is: " << result << endl;

  /**
   * ! result:
   * Within function, *pit = 15 
   * After function: it = 15
   * Result return is: 15
  */

  return 0;
}


double changeIt(double* pit) {
  *pit += 10.0;

  cout << endl << "Within function, *pit = " << *pit << endl;
  return *pit;
}

