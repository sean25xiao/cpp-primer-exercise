#include <iostream>

int main() {

  int ival   = 1.01;   // OK
  //int &rval1 = 1.01;   // Invalid, initializer must be an object
                       // error: cannot bind non-const lvalue reference of type ‘int&’ to an rvalue of type ‘int’
  int &rval2 = ival;   // OK
  //int &rval3;          // Invalid, no initializer

  return 0;
}