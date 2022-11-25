#include<iostream>
#include<stdio.h>


using namespace std;

int main(int argc, char const *argv[]) {
  
  __int8 nSmall;      // Declares 8-bit integer
  __int16 nMedium;    // Declares 16-bit integer
  __int32 nLarge;     // Declares 32-bit integer
  __int64 nHuge;      // Declares 64-bit integer


  nSmall = 8;

  cout << "nSmall: " << nSmall << endl;
  cout << "nMedium: " << nMedium << endl;
  cout << "nLarge: " << nLarge << endl;
  cout << "nHuge: " << nHuge << endl;

  /**
   * ! resut:
   * nSmall: 
   * nMedium: 0
   * nLarge: 16
   * nHuge: 2800871019440
  */
  return 0;
}
