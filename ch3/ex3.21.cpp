#include <iostream>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::endl;

void print_vec_int (const vector<int> &vec, int id) {

  cout << "v" << id << "'s size: " << vec.size() << endl;

  for(auto it = vec.cbegin(); it != vec.cend(); ++it) // for each element in vec
    cout << (*it) << " ";

  cout << endl;
}

void print_vec_string (const vector<string> &vec, int id) {

  cout << "v" << id << "'s size: " << vec.size() << endl;

  for(auto it = vec.cbegin(); it != vec.cend(); ++it) // for each element in vec
    cout << (*it) << " ";

  cout << endl;
}

int main() {

  vector<int> v1;  // 0 element
  vector<int> v2(10);  // 10 elements
  vector<int> v3(10, 42); // 10 elements
  vector<int> v4{10};  // 1 element
  vector<int> v5{10, 42}; // 2 elements
  vector<string> v6 {10}; // 1 element
  // Wrong! should be 10 elements and each has empty strings

  vector<string> v7 {10, "hi"}; // 10 elements

  print_vec_int(v1, 1);
  print_vec_int(v2, 2);
  print_vec_int(v3, 3);
  print_vec_int(v4, 4);
  print_vec_int(v5, 5);
  print_vec_string(v6, 6);
  print_vec_string(v7, 7);
  
  return 0;
}