#include <iostream>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {

  vector<string> artical {5, "This is the setence!"};
  artical.push_back("\0");
  artical.push_back("This is start of p2.");

  for (auto it = artical.begin(); it != artical.end() && !it->empty(); ++it) {
    for (auto &c : (*it)) {
      c = toupper(c);
    }
    cout << (*it) << endl;
  }

  return 0;
}