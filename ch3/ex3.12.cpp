#include <iostream>
#include <vector>

using std::vector;
using std::string;

int main() {
  vector<vector<int>> ivec;
  // OK, vector of vector with int type and initialized to 0

  // vector<string> svec = ivec;
  // Error, type not matches

  vector<string> svec(10, "null");
  // OK, vector of string type, 10 elements and each is initialized as "null"

  return 0;
}