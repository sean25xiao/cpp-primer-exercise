#include <iostream>

using std::cout;
using std::cin;
using std::string;

#define READLNE 0

int main() 
{

#ifdef READLINE
  string line;
  while(getline(cin, line)) {
    cout << line << std::endl;
  }

#else
  string word;
  while (cin >> word) {
    cout << word << std::endl;
  }
#endif



  return 0;
}