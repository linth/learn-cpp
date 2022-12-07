/**
 * memset() 使用
 *  - void *memset(void *str, int c, size_t n)
 *  - 對一段記憶體區塊全部設定為某個值的函式
 * 
 * puts() 使用
 *  - 比 printf() 使用更簡單，用來顯示單一變數。
 * 
 * Reference:
 *  - https://www.runoob.com/cprogramming/c-function-memset.html
 *  - https://shengyu7697.github.io/cpp-memset/
 *  - http://c.biancheng.net/view/237.html
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
