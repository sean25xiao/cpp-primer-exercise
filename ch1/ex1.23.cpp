#include <iostream>
#include "Sales_item.h"

int main() 
{
  Sales_item currItem, item1;

  if (std::cin >> currItem) {
    int cnt = 1;
    while (std::cin >> item1) {
      if (item1.isbn() == currItem.isbn())
        ++cnt;
      else {
        std::cout << currItem.isbn() << " occurs "
                  << cnt << " times" << std::endl;
        currItem = item1;
        cnt = 1;
      }  // end of esle
    } // end of while
  } // end of if
 
  return 0;
}
