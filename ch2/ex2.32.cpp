#include <iostream>

int main() {

  constexpr int null = 0; // null is constant
  constexpr int i = 10;
  //int *p = null;
  // error: invalid conversion from ‘int’ to ‘int*’
  const int *p = &null; // p points to a constant int object
  const int *const p1 = &null; // a constant pointer p1 points to a constant int object
  // constexpr const int *p2 = &null;
  // error: ‘& ’ is not a constant expression: the address of null is not a fixed address
  // The address of null can only be known in the run time

  return 0;
}