#include <iostream>
#include "Sales_item.h"

int main()
{
  Sales_item item1, item_sum;

  while (1) {

    while (std::cin >> item1) {
      std::cout << item_sum + item1 << std::endl;
      item_sum += item1;
    }

  }
  
  return 0;
}
