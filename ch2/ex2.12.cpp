#include <iostream>

int main()
{
  //int double = 3.14;  // Invalid error: expected unqualified-id before ‘=’ token
  //int _;              // OK
  //int catch-22;       // Invalid, cannot use dash - error: expected unqualified-id before ‘catch’
  //int 1_or_2 = 1;     // Invalid, cannot start with number - error: expected unqualified-id before numeric constant
  double Double = 3.14;  // OK

  return 0;
}