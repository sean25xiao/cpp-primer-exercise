#include <iostream>

int main()
{
  int val_start = 10, val_end = 0;
  int val = val_start;

  while (val >= val_end)
  {
    std::cout << "val is " << val << std::endl;
    --val;   // --val  ====>  val = val - 1
  }

  return 0;
}
