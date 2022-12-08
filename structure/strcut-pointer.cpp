/**
 * 2 struct + pointer. 
 * 
 * TODO: had been finished yet.
*/

#include <iostream>

using namespace std;


struct student {
  entry e;

  string name;
  int age;
};


struct entry {
  entry* ptr;
};


int main(int argc, char const *argv[]) {
  
  //TODO: need to use a pointer to get structure of data.
  // entry e;
  // student s = { e, "george", 66 };
  // cout << e.ptr << endl;

  return 0;
}

