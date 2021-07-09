#include<iostream>

int main()
{
  int m1, m2 = 0;

  std::cout << "Enter two numbers:" << std::endl;
  std::cin >> m1 >> m2;

  std::cout << "The multiplication of " << m1 << " and " << m2
	    << " is " << m1 * m2 << std::endl;

  return 0;
}
