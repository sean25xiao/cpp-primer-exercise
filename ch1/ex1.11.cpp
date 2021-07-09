#include <iostream>

int main()
{
  int small, large = 0;

  std::cout << "Please enter two ints (small one first and then large one): " 
            << std::endl;
  std::cin  >> small >> large;
  std::cout << "The numbers in the range are: " << std::endl;

  int val = small;
  while (val <= large) 
  {
    std::cout << val << std::endl;
    ++val;
  }

  return 0;
}
