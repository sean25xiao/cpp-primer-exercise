#include <iostream>
#include <vector>

using std::vector;
using std::string;

int main() 
{
  vector<int> ivec; 
  // ivec[0] = 42; // Illegal: no elements
  // Segmentation fault (core dumped)
  // However, compiler does not detect error

  return 0;
}