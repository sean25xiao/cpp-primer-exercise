#include <iostream>
#include <vector>

using std::vector;
using std::string;
using std::cin;

int main() {

  string word;
  vector<string> str_vec;

  while (cin >> word)
    str_vec.push_back(word);

  return 0;
}