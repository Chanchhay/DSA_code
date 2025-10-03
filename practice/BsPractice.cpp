#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> &arr, int target)
{
  int low = 0;
  int high = arr.size() - 1;
  while (low <= high)
  {
    int mid = low + (high - low) / 2;
    if (arr[mid] == target)
      return mid;
    else if (arr[mid] > target)
      high = mid - 1;
    else
      low = mid + 1;
  }
  return -1;
}

int linearSearch(vector<int>&arr, int target){
  for (int i = 0; i < arr.size(); i++){
    if (arr[i] == target) return i;
  }
  return -1;
}

void printArray(vector<int> &arr)
{
  for (const auto val : arr)
  {
    cout << val << " ";
  }
  cout << endl;
}
int main()
{
  system("clear");
  vector<int> arr = {10, 20, 30, 40, 50, 60, 70, 80, 90};
  int target = 90;
  cout << "Our array: ";
  printArray(arr);
  int index = binarySearch(arr, target);
  if (index == -1)
  {
    cout << "Item not found!!!";
  }
  else
  {
    cout << "This is Binary Search: " << endl;
    cout << "Item : " << target << " Found at index: " << index << endl;
  }
  cout << endl;

  int index2 = linearSearch(arr, target);
  if (index2 == -1){
    cout << "Target not found!!!" << endl;
  }
  else
  {
    cout << "Linear Search : " << endl;
    cout << "Item: " << target << " found at index : " << index2 << endl;
  }
  cout << endl;

  return 0;
}
