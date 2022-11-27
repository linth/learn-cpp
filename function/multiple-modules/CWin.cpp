#include <iostream>
#include "CWin.h"

using namespace std;

void CWin::show(void) {
    cout << "Window " << id << ":" << endl;
    cout << "Area = " << width * height << endl;
}