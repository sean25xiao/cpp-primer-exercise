#include <iostream>

/*
Assignment is an example of an expression that yields a reference type. 
The type is a reference to the type of the left-hand operand.
That is, if i is an int, then the type of the expression i = x is int&.
*/

int main() {

  int a = 3, b = 4;

  decltype(a) c = a; // c is int with value of 3
  decltype(a = b) d = a; // d is int& which binds to a

  c = c + 2;  // c = 5
  d = d + 3;  // d binds to a, a = 6

  std::cout << "c is " << c << std::endl;
  std::cout << "d is " << d << std::endl;
  std::cout << "a is " << a << std::endl;

  return 0;
}