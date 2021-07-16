#include <iostream>

int main() {

  int a = 3, b = 4;
  
  decltype(a) c = a; // c is int type with value 3
  decltype((b)) d = a; // d is int& which bind to a

  ++c; // c = 4
  ++d; // d is alias to a, a = 4

  std::cout << "c is " << c << std::endl;
  std::cout << "d is " << d << std::endl;

  return 0;
}