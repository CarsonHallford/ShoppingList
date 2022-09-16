#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
#include <string>

// Step 1. create a Grocery class that holds an isle and a name
class Grocery {
 public:
  int isleNumber;
  std::string groceryName;
};


void printList(std::list<Grocery> groceryList) {
  for (auto it = groceryList.begin(); it != groceryList.end(); it++) {
    std::cout << it->groceryName << std::endl;
  }
}

int main() {
  // Step 2. Construct a std::list<Grocery>
  std::list<Grocery> groceryList;

  // Step 3: Read N groceries and insert them one-at-a-time
  // into the list, making sure you insert them in sorted order.
  // I recommend using iterators and `insert()`.
  int groceries;
  std::cin >> groceries;

  for (int i = 0; i < groceries; i++) {
    Grocery grocery;
    std::list<Grocery>::iterator temp;
    std::cin >> grocery.isleNumber >> grocery.groceryName;
    if (groceryList.size() == 0) {
      groceryList.insert(groceryList.begin(), grocery);
    } else {
      for (auto it = groceryList.begin(); it != groceryList.end(); it++) {
        
        if (it->isleNumber > grocery.isleNumber) {
          // insert before it
          groceryList.insert(it, grocery);
          break;
        } else if (it->isleNumber == groceryList.back().isleNumber) {
          // push back element
          groceryList.push_back(grocery);
          break;
        }
      }
    }
  }

  // Step 4: Read M groceries and remove them one-at-a-time
  // from the list. I recommend using iterators, and `erase()`.
  int kitchenNum;
  std::cin >> kitchenNum;
  for (int i = 0; i < kitchenNum; i++) {
    std::string kitchenGroceries;
    std::cin >> kitchenGroceries;
    for (auto temp2 = groceryList.begin(); temp2 != groceryList.end();
         temp2++) {
      if (kitchenGroceries == temp2->groceryName) {
        groceryList.erase(temp2);
        break;
      }
    }
  }
  // Step 5: Print out all groceries in the list.
  printList(groceryList);
  return 0;
}