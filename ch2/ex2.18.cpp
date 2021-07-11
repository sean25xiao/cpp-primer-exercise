#include <iostream>

int main() {
  
  float val1 = 2.145, val2 = 431.3;
  float *p1 = nullptr;

  p1 = &val1;
  std::cout << "p1 = &val1 -->"  
            << "*p1 = " << *p1 << std::endl;  // 2.145

  p1 = &val2;
  std::cout << "p1 = &val2 -->"  
            << "*p1 = " << *p1 << std::endl;  // 431.3

  *p1 = 400.0;  // change val2 from 431.3 to 400
  std::cout << "*p1 = 400.0 -->"  
            << "val2 = " << val2 << std::endl;  // 400

  return 0;
}