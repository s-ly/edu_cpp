#include <iostream>

#include "func.h"

int main() {
  Arr arr;
  arr.arrPrint();
  arr.arrAdd(5);
  arr.arrPrint();

  Arr arr2(arr);
  arr2.arrPrint();

  return 0;
}
