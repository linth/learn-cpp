/**
 * @file Prog.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-24
 * 
 * @copyright Copyright (c) 2022
 * 
 * 
 * Reference:
 *  - https://github.com/sinairv/Cpp-Tutorial-Samples/blob/master/Functions/Call%20By%20Reference/Prog.cpp
 * 
 */

#include <iostream>

using namespace std;


int squareByValue(int);
void squareByReference(int &);



int main() {
    int x = 2, z = 4;

    cout << "x = " << x << " before squareByValue\n"
        << "Value returned by squareByValue: "
        << squareByValue( x ) << endl
        << "x = " << x << " after squareByValue\n" << endl;

    cout << "z = " << z << " before squareByReference" << endl;
    squareByReference( z );
    cout << "z = " << z << " after squareByReference" << endl;

    return 0;
}


int squareByValue(int a) {
    return a *= a; // caller's argument not modified
}

void squareByReference(int &cRef) {
    cRef *= cRef; // caller's argument modified
}


