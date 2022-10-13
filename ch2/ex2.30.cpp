#include <iostream>

int main() {

  int i = 0;
  const int v2 = 0;
  int v1 = v2;  // OK, v2's top-level const ignored
  int *p1 = &v1; // OK
  int &r1 = v1;  // OK
  const int *p2 = &v2; // OK, p2 has low level - p2 itself is not constant, it points to a constant int object
  const int *const p3 = &i; // OK, p3 both has top and low level
  const int &r2 = v2; // OK, r2 refers to a const int object

  return 0;
}