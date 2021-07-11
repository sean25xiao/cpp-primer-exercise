#include <iostream>

int main() {

  int i = 0, &r1 = i;
  double d = 0, &r2 = d;

  r2 = 3.14159;  // OK, actually d = 3.14159
  r2 = r1;       // OK, actually r2 = i
  i  = r2;       // Invliad, object cannot be assigned to reference
  r1 = d;        // Invalid, type not matches

  return 0;
}

// Wrong
/*
  r2 = 3.14159;  // OK, actually d = 3.14159
  r2 = r1;       // OK, actually d = i
  i  = r2;       // OK. actually i = d
  r1 = d;        // OK, actually i = d
*/