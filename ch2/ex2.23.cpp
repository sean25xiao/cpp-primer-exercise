#include <iostream>

int main() {

  int i = 0;
  //int *p = &i;     // Valid
  int *p = nullptr;  // Invalid

  if (p)
    std::cout << "Valid" << std::endl;
  else
    std::cout << "Invalid" << std::endl;

  return 0;
}