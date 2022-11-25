/**
 * memset() 使用
 *  - void *memset(void *str, int c, size_t n)
 * 
 * Reference:
 *  - https://www.runoob.com/cprogramming/c-function-memset.html
*/

#include<stdio.h>
#include<string.h>


int main(int argc, char const *argv[]) {
  
  char str[50];
  strcpy(str, "Hello world.");
  puts(str);
  
  memset(str, '*', 7);
  puts(str);

  /**
   * ! result:
   * Hello world.
   * *******orld.
  */

  return 0;
}
