/**
 * use case: typedef + struct + pointer 
*/
#include <iostream>

using namespace std;


/* machine dependant */
typedef unsigned int TMWTYPES_UINT;

/** Define a data structure that defines a list member. */
typedef struct TMWDlistMember {
  struct TMWDlistMember *pNext;
} TMWDLIST_MEMBER;

/* Define a data structure that defines a list */
typedef struct TMWDoubleList {
  TMWTYPES_UINT size;
  TMWDLIST_MEMBER *pFirst;
  TMWDLIST_MEMBER *pLast;
} TMWDLIST;

/** Application layer context. */
typedef struct TMWApplicationStruct {
  TMWDLIST channels;
} TMWAPPL;


int main(int argc, char const *argv[]) {

  TMWDlistMember* ptr;
  cout << &ptr << endl; // i.e., 0x537c7ff698

  TMWAPPL l = { 100, ptr, ptr };

  cout << l.channels.size << endl; // 100
  cout << l.channels.pFirst << endl; // 0x10
  cout << &(l.channels.pFirst) << endl; // i.e., 0x88849ff9f8
  cout << l.channels.pLast << endl; // 0x10

  return 0;
}
