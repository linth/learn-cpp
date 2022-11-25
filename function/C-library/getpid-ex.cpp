/**
 * getpid 使用
 *  - get process id (PID) value.
 * 
 * Reference:
 *  - https://shengyu7697.github.io/cpp-getpid/
*/
#include <stdio.h>
#include <unistd.h>
// #include <sys/types.h> /* you don't need this, if only print pid. */


int main(int argc, char const *argv[]) {
  
  pid_t pid = getpid();
  printf("Process ID: %d\n", pid);

  return 0;
}

