#include <iostream>
#include <vector>

using std::vector;
using std::string;

int main() 
{
  vector<int> method1 (10, 42);
  vector<int> method2 {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
  vector<int> method3;

  for (int i = 0; i < 10; ++i)
    method3.push_back(42);

  // method1 is the best - less code

  return 0;
}