#include <iostream>

int main() {

  int i = 42;

  void *p = &i; // void* is a special type that can hold the address of any object, but the type of the object at that address is unknown

  //long *lp = &i;  // error: cannot convert ‘int*’ to ‘long int*’ in initialization

  return 0;
}