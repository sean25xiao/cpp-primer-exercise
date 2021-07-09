// Answer:
// The following code does the operation:
// -99 + (-98) + (-97) + ...... + 100 = 100

#include <iostream>

int main()
{
  int sum = 0;

  for (int i = -100; i <= 100; ++i)
    sum += i;

  std::cout << "sum is " << sum << std::endl;
}

// Wrong!
// The output is 0, the program starts from -100 to 100

// Difference between ++i and i++
// ++i is pre-increment, 
//      it will increment the value of i and then return the incremented value
// i++ is post-increment,
//      it will increment the value of i, but return the original value that i held before the operation finishes
