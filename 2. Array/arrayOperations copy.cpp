#include <iostream>
using namespace std;
void printArray(int arr[], int n)
{
  cout << "This is our array: ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
}
int linearSearch(int arr[], int n, int target)
{
  for (int i = 0; i < n; i++)
  {
    if (target == arr[i])
      return i;
  }
  return -1;
}
int binarySearch(int arr[], int n, int target)
{
  int low = 0;
  int high = n - 1;
  while (low <= high)
  {
    int mid = low + (high - low) / 2;
    if (arr[mid] == target)
      return mid;
    else if (arr[mid] < target)
      mid = low + 1;
    else
      high = mid - 1;
  }
  return -1;
}
int main()
{
  system("cls");
  int arr[] = {11, 22, 33, 44, 55, 66, 77, 88, 99};
  int target = 11;
  int n = sizeof(arr) / sizeof(arr[0]);
  printArray(arr, n);
  // Linear search
  int linearIndex = linearSearch(arr, n, target);
  int binaryIndex = binarySearch(arr, n, target);

  cout << "======================== Linear Search ========================" << endl;
  if (linearIndex == -1)
    cout << "\nItem : " << target << " Not Found!!" << endl;
  else
    cout << "\nItem : " << target << " Found at Index: " << linearIndex << endl;

  cout << "======================== Binary Search ========================" << endl;
  if (binaryIndex == -1)
  {
    cout << "\nItem not found!!" << endl;
  }
  else
  {
    cout << "\nItem found at index: " << binaryIndex << endl;
  }

  return 0;
}
