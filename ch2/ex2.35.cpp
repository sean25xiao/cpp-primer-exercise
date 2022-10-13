#include <iostream>

int main() {

  const int i = 42;

  auto j = 1; // j is int

  const auto &k = i; // k is const ref to int i (low-level const dropped)

  auto *p = &i; // p is a pointer points to const int object

  const auto j2 = i, &k2 = i;
  // j2 is const int with value 42
  // k2 is a const ref to const int i

  return 0;
}