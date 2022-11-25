/**
 * sprintf 使用
 *  - int sprintf(char *str, const char *format, ...)
 * 
 * Reference:
 *  - https://www.runoob.com/cprogramming/c-function-sprintf.html
*/
#include <stdio.h>
#include <math.h>


int main(int argc, char const *argv[]) {
  
  char str[80];

  sprintf(str, "pi值 = %f", M_PI); // M_PI defined in math.h file.
  puts(str);

  return 0;
}
