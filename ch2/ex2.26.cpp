#include <iostream>

int main() {
  
  //const int buf;         // Error, need initialize
  int cnt = 0;           // OK
  const int sz = cnt;    // OK, cnt is copied 
  ++cnt;                 // OK, cnt is not const
  //++sz;                  // Error, const cannot change

  return 0;
}