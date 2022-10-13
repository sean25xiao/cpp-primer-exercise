// Legal, but we need make sure the body of the for loop does not change anything in string

// c is const string &

#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main() {

  const string s = "Keep out!";

  for (auto &c : s) {
    // ......
  }

  return 0;
}