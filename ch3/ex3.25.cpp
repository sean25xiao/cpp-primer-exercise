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
  vector<unsigned> scores(11, 0); // score 100 is also a bucket
  unsigned grade;
  auto it = scores.begin();

  while (cin >> grade) {
    if (grade <= 100) {
      ++(*(it+grade/10));
    }
    else {
      cout << "Not valide, grade shoule <= 100" << std::endl;
    }
  }

  for (auto &e : scores) {
    cout << e << " ";
  }

  cout << std::endl;

  return 0;

}