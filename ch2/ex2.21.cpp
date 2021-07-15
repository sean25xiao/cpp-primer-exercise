#include <iostream>

int main() {

  int i = 0;
  //double *dp = &i; // Illegal
  //int *ip = i; // Illegal
  int *p = &i; // OK

  return 0;
}