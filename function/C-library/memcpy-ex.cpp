/**
 * memcpy() 使用
 *  - 從某一記憶體區段拷貝 n 個字元到另一記憶體區段。
 * 
 * Reference:
 *  - https://pydoing.blogspot.com/2010/07/c-memcpy.html
*/
#include <stdio.h>
#include <string.h>



int main(int argc, char const *argv[]) {
  
  char s[] = "Hello world. This is a github website.";
  char t[20];

  memccpy(t, s, 0, 25);
  printf("%s\n", t);  

  return 0;
}
