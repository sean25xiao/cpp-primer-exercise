#include <iostream>

int main() {

  int* ip, *&r = ip; // &r = ip is Error, need *&r = ip (reference to pointer)
  int i, *ip1 = 0;    // i is an int, *ip1 is a pointer points to int
  int* ip3, ip2;      // (*ip3) is a pointer, ip2 is a int

  return 0;
}