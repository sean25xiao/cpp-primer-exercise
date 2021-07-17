#include <iostream>

using std::cout;

int main() 
{
  int val_start = 50, val_end = 100, sum = 0;
  int val = val_start;

  while (val <= val_end ) 
  {
    sum += val;
    ++val;        // ++val  ====>  val = val + 1
  }

  cout << "The sum from " << val_start
	    << " to " << val_end
            << " is " << sum << std::endl;    // result is 3825

  return 0;
}
