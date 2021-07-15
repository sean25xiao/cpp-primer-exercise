#include <iostream>

int main() {

  //int i = -1, &r = 0;  // Illegal, rvalue should be used

  int i2 = 10, *const p2 = &i2; // OK

  const int i = -1, &r = 0; // OK, const reference

  const int *const p3 = &i2; // OK

  const int *p1 = &i2;  // OK

  //const int &const r2;  // const’ qualifiers cannot be applied to ‘const int&’

  const int i3 = i, &r1 = i; // OK

  //int &r2 = i; // error: binding reference of type ‘int&’ to ‘const int’ discards qualifiers

  return 0;
}