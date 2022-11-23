/*
 Copyright 2022 Google LLC

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

      https://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

/**
 * learn item: 
 * 
 * 1. typedef
 *  - 提供定義客製化的類型，如你自己定義一個 NewInt
 * 
 * TODO: 2. ifndef, define, else, endif.
*/
#include<iostream>
#include <typeinfo>

using namespace std;

// define a new custom type, and then the NewInt type is the same `int`.
typedef int NewInt; 


int main(int argc, char const *argv[]) {

  NewInt height = 180;
  cout << "height: " << height << endl;


  return 0;
}
