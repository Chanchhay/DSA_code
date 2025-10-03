#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
void printArray(int arr[], int size)
{
  cout << "This is our array: ";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}
int linearSearch(int arr[], int size, int target)
{
  auto startTime = high_resolution_clock::now();
  for (int i = 0; i < size; i++)
  {
    if (target == arr[i])
    {
      auto endTime = high_resolution_clock::now();
      auto duration = duration_cast<nanoseconds>(endTime-startTime);
      cout << "duration for linear is: " << duration.count() << " nanoSeconds " << endl;
      return i;
    }
  }
  auto endTime = high_resolution_clock::now();
  auto duration = duration_cast<nanoseconds>(endTime - startTime);
  cout << "duration for linear is: " << duration.count() << " nanoSeconds " << endl;
  return -1;
}
int binarySearch(int arr[], int size, int target)
{
  int low = 0;
  int high = size - 1;
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
  system("clear");
  const int size = 1000000;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    arr[i] = i * 2;
  }
  int target = -2;
  // printArray(arr, size);
  // Linear search
  int linearIndex = linearSearch(arr, size, target);
  int binaryIndex = binarySearch(arr, size, target);

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
