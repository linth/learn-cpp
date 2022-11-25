# learn-cpp
learn c++ by examples



## [extern “C” 如何使系統函式庫兼容C與C++](https://hackmd.io/@rhythm/HyOxzDkmD)
### C code 提供給 C++ 使用
```c++
void c_function() {
  /** do something. */
  // ...
}

extern "C" {

  /* C code */
  #include "xxx/xx/xxx.h"

  void c_function();
}

int main() {
  c_function();
  return 0;
}
```

```shell
$ g++ -c main.cpp
$ g++ main.o cfunc.o -o a.out
$ ./a.out
```

### C++ code 提供給 C 使用
```c++
/* c_function.h */

#ifdef __cplusplus
extern "C" {
#endif

void c_function();

#ifdef __cplusplus
}
#endif
```



# Reference
- [extern “C” 如何解決問題](https://hackmd.io/@rhythm/HyOxzDkmD)
