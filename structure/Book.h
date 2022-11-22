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


struct Book {
  /* data */
  char title[80];
  char author[80];
  char publisher[80];
  int year;
};


// 可定義完 struct，同時定義變數
struct StoryBook {
  /* data */
  char title[80];
  char author[80];
  char publisher[80];
  int year;
} dictionary, stroycomic;


struct Box {
  /* data */
  double length;
  double breadth;
  double height;
  double volume();
};


// Prototype of function to calculate the volume of box.
// double volume(const Box& aBox);
