#include <iostream>
using namespace std;
void printArray(int a[], int n)
{
  for (int i = 0; i < n; i++)
    cout << a[i] << " ";
}
void bubbleSort(int a[], int n)
{
  int i, j, temp;
  bool isSwapped = false;
  for (i = 0; i < n; i++)
  {
    bool isSwapped = false;
    for (j = 0; j < n - i - 1; j++)
    {
      if (a[i] > a[j + 1])
      {
        bool isSwapped = true;
        temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
    if (!isSwapped)
    {
      break;
    }
  }
}

int main()
{
  system("clear");
  int i, j, temp;
  int arr[] = {91, 80, 50, 33, 99, 11, 66, 77, 44};
  // int arr[] = {11, 22, 33, 44, 55};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "This is our array before sort: " << endl;
  cout << "\t";
  printArray(arr, n);
  bubbleSort(arr, n);
  cout << "\nThe array after sort: " << endl;
  cout << "\t";
  printArray(arr, n);
  cout << endl;
  cout << n;
  return 0;
}
