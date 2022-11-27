#include <iostream>
#include <cstdlib>

namespace name1 {
    int var = 5;
}

using namespace std;

int main(int argc, char const *argv[]) {
    
    int var = 10;

    cout << "name1: " << name1::var << endl;
    cout << "var: " << var << endl;

    return 0;
}
