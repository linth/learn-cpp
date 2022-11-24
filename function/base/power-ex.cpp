#include<iostream>
#include<iomanip>

using namespace std;

double power(double x, int n) {
  double result = 1.0;

  if (n>=0) {
    for (int i=0; i<n; i++) {
      result *= x;
    }
  } else {
    for (int i=0; i<-n; i++) {
      result /= x;
    }
  }

  return result;
}


int main(int argc, char const *argv[]) {
  
  cout << endl;

  // calculate powers of 8 from -3 to +3.
  for (int i=-3; i<=3; i++) {
    cout << setw(10) << power(8.0, i);
  }

  cout << endl;

  /**
   * ! result:
   * 0.00195312  0.015625     0.125         1         8        64       512
  */
  return 0;
}
