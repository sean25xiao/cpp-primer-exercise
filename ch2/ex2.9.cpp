#include <iostream>

int main() {

  //std::cin >> int input_value;  // error: expected primary-expression before ‘int’
  //int i = {3.14};  // error: narrowing conversion
  //double salary = wage = 9999.99;  // error: ‘wage’ was not declared in this scope
  int i = 3.14;  // ok
  std::cout << "i is " << i << std::endl;  // i is 3

  return 0;

}