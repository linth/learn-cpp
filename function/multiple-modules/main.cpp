// #include <iostream>
#include "Show.h"

using namespace std;


int main(int argc, char const *argv[]) {
  
  Show s;
  s.showHelloWorld();

  /**
   * TODO: error 
   * 
   * undefined reference to `Show::showHelloWorld()'
   * collect2.exe: error: ld returned 1 exit status
  */

  return 0;
}
