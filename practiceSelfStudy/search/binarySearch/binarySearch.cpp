#include <iostream>
using namespace std;
int binarySearch(int arr[], int beg, int end, int val)
{
  int mid;
  if (end >= beg)
  {
    mid = (beg + end) / 2;
    if (arr[mid] == val)
      return mid + 1;
    else if (arr[mid] < val)
      return binarySearch(arr, mid + 1, end, val);
    else
      return binarySearch(arr, beg, mid - 1, val);
  }
  return -1;
}
int main()
{
  system("cls");
  int arr[] = {10, 12, 34, 44, 56, 62, 88, 92, 99};
  int val = 1;
  int n = sizeof(arr) / sizeof(arr[0]);
  int result = binarySearch(arr, 0, n - 1, val);

  cout << "Element we have: { ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << "}" << endl;

  if (result == -1)
    cout << "The element " << "\"" << val << "\"" << " we search for is not inside our array" << endl;
  else
  {
    cout << "Result of search is at index: " << result << " of the array" << endl;
    cout << "Value we search for is : " << val << endl;
  }
  return 0;
}
