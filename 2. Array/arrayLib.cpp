#include <iostream>
#include <array>
using namespace std;

int main()
{
  system("cls");

  array<int, 5> array = {33, 44, 55, 76, 33};
  cout << "Second element: " << array.at(1) << endl;
  cout << "Size of array is: " << array.size() << endl;

  cout << "Printing using iterators: " << endl;
  for (auto it = array.begin(); it != array.end(); it++)
  {
    cout << " " << (*it); // * = dereferrence
  }
  cout << endl;

  cout << "2. Ranged-based  loop" << endl;
  for (const auto& val : array){
    cout << " " << val;
  }
  cout << endl;
  return 0;
}
