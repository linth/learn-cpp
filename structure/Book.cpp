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


#include "Book.h"
#include<stdio.h>
#include<iostream>

using namespace std;

double Box::volume() {
  return length * breadth * height;
}


int main(int argc, char const *argv[]) {
  /* code */
  
  // 宣告方式
  Book paperback;
  struct Book paperback2;


  // Book example.
  Book novel;
  Book* pTravelGuide; // 指向Book的指標
  Book languageGuide[10]; // 有10個Book元素的陣列


  Book travelBook = {
    "USA",
    "George",
    "Discovery",
    1999
  };

  cout << "title: " << travelBook.title << "; "
    << "author: " << travelBook.author << "; "
    << "publisher: " << travelBook.publisher << "; "
    << "year: " << travelBook.year 
    << endl;

  
  // Box example.
  Box firstBox = { 80.0, 50.0, 40.0 };
  double result = firstBox.volume();
  cout << "The volume of box is " << result << endl;

  return 0;
}
