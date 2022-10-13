#include <iostream>

using std::cout;
using std::cin;
using std::string;

void while_loop_method() {
  string str {"While loop"};
  decltype(str.size()) idx = 0;

  while (idx < str.size()) {
    str[idx] = 'X';
    ++idx;
  }
  cout << str << std::endl;
  
}

int main() {

  string str {"Hello World!"};
  for (auto &c : str) {
    c = 'X';
  }
  cout << str << std::endl;

  cout << std::endl;
  cout << "======= While Loop Method =======" << std::endl;

  while_loop_method();

  return 0;
}

// Prefer for loop method
// + Easy
// + Do not need to worry about index