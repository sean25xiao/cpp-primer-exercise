#include <iostream>

int main() {

  // ======== From ex2.30.cpp ========
  int i = 0;
  const int v2 = 0;
  int v1 = v2;  // OK, v2's top-level const ignored
  int *p1 = &v1; // OK
  int &r1 = v1;  // OK
  const int *p2 = &v2; // OK, p2 has low level - p2 itself is not constant, it points to a constant int object
  const int *const p3 = &i; // OK, p3 both has top and low level
  const int &r2 = v2; // OK, r2 refers to a const int object
  // ===========================

  r1 = v2; // Illegal
  // p1 = p2; // Illegal, p1 points to plain int object, while p2 points to a const int object
  // error: invalid conversion from ‘const int*’ to ‘int*’
  p2 = p1; // OK, reverse is OK
  // p1 = p3; // Illegal, p3 has low level const, while p1 does not
  // error: invalid conversion from ‘const int*’ to ‘int*’
  p2 = p3; // OK, p3's high level const is ignored, both p2 and p3 have low level const

  return 0;
}