#include <iostream>
#include <stdbool.h>

int main() {

  int i = 10;
  int *p = &i;   // p points to valid object
  //int *p = nullptr;  // p points to invalid object

  if (p)
    std::cout << "p points to valid object" << std::endl;
  else
    std::cout << "p points to invalid object" << std::endl;

  return 0;
}