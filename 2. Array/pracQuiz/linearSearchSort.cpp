#include <iostream>
#include <vector>
using namespace std;
int linearSearch(int array[], int n, int target)
{
  for (int i = 0; i < n; i++)
  {
    if (target == array[i])
      return i;
  }
  return -1;
}

void bubbleSort(vector<int> &arr)
{
  for (int i = 0; i < arr.size() - 1; i++)
  {
    for (int j = 0; j < arr.size() - 1; j++)
    {
      if (arr[j] < arr[j + 1])
        swap(arr[j], arr[j+1]);
    }
  }
}

int binarySearch(vector<int> &arr, int target){
  int low =0;
  int high = arr.size() -1;
  while(low <= high){
    int mid = low + (high -low)/2;
    if (arr[mid] == target) return mid;
    else if (arr[mid] > target) high = mid -1;
    else low = mid +1;

  }
}

int main()
{

  return 0;
}
