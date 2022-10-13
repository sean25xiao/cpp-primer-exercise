#include <iostream>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::cin;

#define ADJACENT 1
#define SYMME 1

int main() 
{
  vector<int> vec;
  int num, size, res;

  while (cin >> num) {
    vec.push_back(num);
  }

  size = vec.size();
  bool even = (size%2 == 0);

#ifdef ADJACENT
  for (int i = 0; i < size; i = i + 2) {
    res = vec[i] + vec[i+1];
    cout << res << " ";
  }
#endif

  cout << std::endl;
  cout << "==================" << std::endl;

#ifdef SYMME
  for (int i = 0; i <= size/2; ++i) {
    if ((i == size/2) && !even) {
      res = vec[i];
      cout << res << " ";
    }
    else if ((i == size/2) && even)
      cout << "\t";
    else {
      res = vec[i] + vec[size-1-i];
      cout << res << " ";
    }
  }
#endif

  return 0;

}