#include <iostream>

using std::cout;
using std::cin;
using std::string;

int main() {

  string str {"Hello World!"};
  for (char c : str) {
    c = 'X';
  }
  cout << str << std::endl; // Output is still Hello World!

  return 0;
}