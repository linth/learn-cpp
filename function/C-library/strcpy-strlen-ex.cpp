/**
 * strcpy() 使用
 *  - char *strcpy(char *dest, const char *src)
 * 
 * strlen() 使用
 *  - 計算 string 的長度
 * 
 *TODO:  - sizeof() 可以一起使用 ???
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


  // strlen
  printf("the char of src %d\n", strlen(src));
  //TODO: sizeof(), 會失敗


  return 0;
}

