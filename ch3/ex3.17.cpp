#include <iostream>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

void print_string_eight(const vector<string> &vec) {
  int count = 0;

  for (auto &c : vec) {
    if (count % 8 == 0) {
      cout << endl;
      cout << c << " ";
    }
    else
      cout << c << " ";
    ++count;
  }
}

int main() {

  vector<string> str_vec;
  string word;
  int counter = 0;
  
  while (cin >> word) {
    str_vec.push_back(word);
  }

  for (auto &e : str_vec) {
    for (auto &c : e)
      c = toupper(c);
  }

  print_string_eight(str_vec);

  return 0;
}