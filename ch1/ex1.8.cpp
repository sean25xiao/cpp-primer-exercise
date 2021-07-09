#include <iostream>

int main()
{
  std::cout << "/*";
  std::cout << "*/";
  //std::cout << /* "*/" */;        // This is illegal
  std::cout << /* "*/" /* "/*" */;

  return 0;
}
