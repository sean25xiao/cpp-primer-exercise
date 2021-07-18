#include <iostream>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

void print_vec(const vector<int> &vec) {
  for (auto e : vec) {
    cout << e << " " << endl;
  }
}

int main() {

  vector<int> vec(10, 1);
  int pre = 1;
  
  for (auto it = vec.begin(); it != vec.end(); ++it) {
    (*it) = pre * 2;
    pre = (*it);
  }

  print_vec(vec);

  return 0;
}