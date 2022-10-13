#include <iostream>

using std::cout;
using std::cin;
using std::string;

int main() {

  string str {"Hello World!"};
  for (auto &c : str) {
    c = 'X';
  }
  cout << str << std::endl;

  return 0;
}