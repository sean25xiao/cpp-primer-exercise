#include <iostream>

int main() {

  // int i, *const cp; // Illegal
  // error: uninitialized const ‘cp’

  //int *p1, *const p2;  // Illegal
  // error: uninitialized const ‘p2’

  //const int ic, &r = ic; // Illegal
  // error: uninitialized const ‘ic’

  const int *const p3; // Illegal
  // error: uninitialized const ‘p3’

  const int *p; // OK

  return 0;
}