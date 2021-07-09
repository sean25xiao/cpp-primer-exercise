#include <iostream>

int main() 
{
  int small, large, sum = 0;

  std::cout << "Please enter two ints (any numbers): " << std::endl;
  std::cin  >> small >> large;

  if (small < large) {
    for (int i = small; i <= large; ++i)
      sum += i;

    std::cout << "Sum is " << sum << std::endl;
  }

  return 0;
}
