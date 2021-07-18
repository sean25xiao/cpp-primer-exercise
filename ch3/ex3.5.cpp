#include <iostream>

using std::cout;
using std::cin;
using std::string;

#define WITHSPACE 1

int main() {

#ifdef WITHSPACE
  string word;
  string setence;
  while (cin >> word) {
    setence += word + ' ';
  }
  cout << setence << std::endl;
#else
  string word;
  string setence;
  while (cin >> word) {
    setence += word;
  }
  cout << setence << std::endl;
#endif

  return 0;
}