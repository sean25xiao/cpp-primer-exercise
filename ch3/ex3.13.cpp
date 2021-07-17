#include <iostream>
#include <vector>

using std::vector;
using std::string;

int main() {

  vector<int> v1;  // 0 element
  vector<int> v2(10);  // 10 elements
  vector<int> v3(10, 42); // 10 elements
  vector<int> v4{10};  // 1 element
  vector<int> v5{10, 42}; // 2 elements
  vector<string> v6 {10}; // 1 element
  vector<string> v7 {10, "hi"}; // 10 elements
  
  return 0;
}