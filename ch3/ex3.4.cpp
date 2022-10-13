#include <iostream>

using std::cout;
using std::cin;
using std::string;

int main() {

  string str1, str2;
  cout << "Please enter two strings" << std::endl;
  cin >> str1 >> str2;

  if (str1 == str2) {
    cout << "They are equal" << std::endl;
  } else if (str1 > str2) {
    cout << "str1 is larger" << std::endl;
  } else {
    cout << "str2 is larger" << std::endl;
  }
  
  cout << std::endl;
  cout << "======== Size Compare ========" << std::endl;

  if (str1.size() == str2.size()) {
    cout << "Equal size" << std::endl;
  } else if (str1.size() > str2.size()) {
    cout << "str1 has larger size" << std::endl;
  } else {
    cout << "str2 has larger size" << std::endl;
  }

  return 0;
}