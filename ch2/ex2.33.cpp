#include <iostream>

int main() {

  int i = 0, &r = i;

  auto a = r; // a is int, alias for i

  const int ci = i, &cr = ci;
  
  auto b = ci; // b is an int (top-level const in ci is dropped)
  auto c = cr; // c is an int (top-level const in cr is dropped)
  auto d = &i; // d is an int*
  auto e = &ci; // e is int* points to const int object (low-level const)
  const auto f = ci; // deduced type of ci is int, f has type const int
  auto &g = ci; // g is a const int& that is bound to ci

  a = 42;  // OK, a = 42 now
  b = 42;  // OK, b = 42 now
  c = 42;  // OK, c = 42 now
  // d = 42;  // Error, d is a pointer
  // e = 42;  // Error, e is const int*
  // g = 42;  // Error, g is read-only

  return 0;
}