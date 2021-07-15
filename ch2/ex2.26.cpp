#include <iostream>

int main() {

  //const int buf; // Illegal, need initialize
  // error: uninitialized const ‘buf’

  int cnt = 0;  // OK

  const int sz= cnt; // OK, cnt is copied

  ++cnt;   // OK, cnt is not constant

  //++sz;    // Illegal, sz is constant
  //error: increment of read-only variable ‘sz’

  return 0;
}