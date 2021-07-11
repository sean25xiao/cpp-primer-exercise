#include <iostream>

int i = 42;

int main() {

  int i = 100;
  int j = i;     // j = 100

  std::cout << i << "  " << j << std::endl;

  return 0;
}

// Output: 100  100