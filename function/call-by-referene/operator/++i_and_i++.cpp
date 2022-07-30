/**
 * @file ++i_and_i++.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>

using namespace std;

int main() {

    // i++ example.
    int i = 1;
    cout << "1: " << i++ << endl; // 1
    cout << "2: " << i << endl; // 2
    

    // ++i example.
    int j = 1;
    cout << "3: " << j << endl; // 1
    cout << "4: " << ++j << endl; // 2
    cout << "5: " << j << endl; // 2
}