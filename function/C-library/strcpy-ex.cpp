/**
 * strcpy() 使用
 *  - char *strcpy(char *dest, const char *src)
 * 
 * Reference:
 *  - https://www.runoob.com/cprogramming/c-function-strcpy.html
*/
#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[]) {
  
  char src[40];
  char dest[100];

  memset(dest, '\0', sizeof(dest));
  strcpy(src, "This is a simple example.");
  strcpy(dest, src);

  printf("The result finally is %s\n", dest);

  return 0;
}

