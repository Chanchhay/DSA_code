#include <iostream>
using namespace std;

int main()
{
  system("clear");
  int n;
  cout << "Enter n (size of array): ";
  cin >> n;

  // Allocate memory
  int *arr = new int(n);

  // Auto assign value to
  for (int i = 0; i < n; i++)
  {
    arr[i] = i * 2;
  }

  // print
  for (int i = 0; i < n; i++)
  {
    cout << " " << arr[i];
  }
  cout << endl;

  delete arr;
  return 0;
}
