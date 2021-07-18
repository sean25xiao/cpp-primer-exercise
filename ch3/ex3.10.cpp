#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main() {
  
  string str_in, str_out;

  while (getline(cin, str_in)) {
    cout << str_in << endl;
    for (auto &c : str_in) {
      c = (ispunct(c)) ? '\0' : c;
    }
    cout << str_in << endl;
  }

  return 0;
}