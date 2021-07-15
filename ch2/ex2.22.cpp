#include <iostream>
#include <stdbool.h>

int main() {

  int i = 0;
  //bool i = false;
  int *p = &i;

  if (p)
    std::cout << "in block 1" << std::endl;
  else
    std::cout << "in block 2" << std::endl;

  if (*p)
    std::cout << "in block 3" << std::endl;
  else
    std::cout << "in block 4" << std::endl;

  return 0;
}

// if (p) - if p is a valid pointer
// if (*p) - if the value pointed by p is not false
// It is better to assign a compared value for if (*p), for example:
// if (*p == 0)