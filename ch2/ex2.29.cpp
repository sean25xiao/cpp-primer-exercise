#include <iostream>

int main() {

  int i;
  const int ic = 10;

  int *p1;
  const int *const p3 = &ic;

  // int *const p2;

  i = ic;  // OK
  // p1 = p3; // Illegal
  // error: invalid conversion from ‘const int*’ to ‘int*’
  // p1 = &ic; // Illegal
  // error: invalid conversion from ‘const int*’ to ‘int*’
  // p3 = &ic; // OK, already done in line 9
  // p2 = p1;  // Illegal
  // error: assignment of read-only variable ‘p2’
  // ic = *p3; // Illegal
  // error: assignment of read-only variable ‘ic’

  return 0;
}