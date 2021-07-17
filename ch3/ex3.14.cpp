#include <iostream>
#include <vector>

using std::vector;
using std::cin;

int main() {

  int num;
  vector<int> str_vec;

  while (cin >> num)
    str_vec.push_back(num);

  return 0;
}