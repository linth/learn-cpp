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

#include<iostream>

using namespace std;


/**
 * base pointer usage.
 * 
 * 間接運算子 (indirection operator): `*` 指標變數是以儲存指標所指向的記憶位置的內容
 * 
 * 為何要弄 pointer? 
 *  - 處理資料快
 *  - 存儲處理方便
 *  - 動態配置新變數的空間
*/

int main(int argc, char const *argv[]) {

  // long* pnumber are long *pnumber are ok.
  long* pnumber;
  long number = 12345;

  pnumber = &number;
  cout << "pnumber: " << pnumber << endl; // 會變動 i.e., 0x87809ff974


  return 0;
}

