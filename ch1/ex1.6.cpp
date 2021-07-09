/*
std::cout << "The sum of " << v1;
	  << " and " << v2;
	  << " is " << v1 + v2 << std::endl;
*/

// Answer: it won't compile successfully

#include <iostream>

int main()
{
  int v1 = 2, v2 = 3;

  std::cout << "The sum of " << v1
            << " and " << v2
	    << " is " << v1 + v2 << std::endl;

  return 0;
}
