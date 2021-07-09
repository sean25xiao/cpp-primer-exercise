#include <iostream>

int main() 
{
  int small, large, sum = 0;

  std::cout << "Please enter two ints (small one then larger one): " << std::endl;
  std::cin  >> small >> large;

  for (int i = small; i <= large; ++i)
    sum += i;

  std::cout << "Sum is " << sum << std::endl;

  return 0;
}
