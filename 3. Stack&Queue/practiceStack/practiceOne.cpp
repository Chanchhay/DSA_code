#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Order
{
private:
  stack<string> items;

public:
  void addItem(string item)
  {
    cout << "Adding item : " << item << endl;
    items.push(item);
  }
  void removeItem()
  {
    if (items.empty())
    {
      cout << "There is no item to remove!! " << endl;
      return;
    }
    cout << "Removing item : " << items.top() << endl;
    items.pop();
  }
  stack<string> getAllItems()
  {
    return items;
  }
};

void printStack(stack<string> items)
{
  int counter = 0;
  if (items.empty())
    cout << "There is no item to display!!!" << endl;
  while (!items.empty())
  {
    cout << (++counter) << ". " << items.top() << endl;
    items.pop();
  }
}
int main()
{
  system("clear");
  int op;
  Order myOrder;
  // myOrder.addItem("pizza");
  // myOrder.getAllItems();
  while (true)
  {
    cout << "1. Add item" << endl;
    cout << "2. Remove item" << endl;
    cout << "3. Show All items" << endl;
    cout << "4. Exit" << endl;
    cout << "Choose one option: ";
    cin >> op;

    switch (op)
    {
    case 1:
    {
      system("clear");
      string item;
      cout << "==========================================" << endl;
      cout << "Enter item to add: ";
      cin.ignore();
      getline(cin, item);
      myOrder.addItem(item);
      cout << "Item " << item << " added successfully!!" << endl;
      cout << "==========================================" << endl;
    }
    break;
    case 2:
    {
      system("clear");
      cout << "==========================================" << endl;
      myOrder.removeItem();
      cout << "==========================================" << endl;
    }
    break;
    case 3:
    {
      system("clear");
      cout << "==========================================" << endl;
      printStack(myOrder.getAllItems());
      cout << "==========================================" << endl;
    }
    break;

    case 4:
      cout << "Exit the program..." << endl;
      exit(0);

    default:
      break;
    }
    //   if (op == 4)
    //     break;
    // }

    return 0;
  }
