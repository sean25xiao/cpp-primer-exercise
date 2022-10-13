#include <iostream>

int main() {

  int i = 42; // assign 42 to i
  int *p1 = &i; // assign the address of i to the pointer p1
  *p1 = *p1 * *p1; // 42 * 42

  std::cout << "*p1 = " << *p1 << std::endl;

  return 0;
}
