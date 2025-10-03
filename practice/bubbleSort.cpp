#include <iostream>
#include <vector>
using namespace std;
void bubbleSort(vector<int> &arr)
{
  for (int i = 0; i < arr.size() - 1; i++)
  {
    for (int j = 0; j < arr.size() - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
        swap(arr[j], arr[j + 1]);
    }
  }
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
  vector<int> arr = {90, 33, 98, 44, 22, 66, 99};
  cout << "Array before sort: ";
  printArray(arr);
  bubbleSort(arr);
  cout << "Array after sort (bubble sort): ";
  printArray(arr);
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << n << endl;
  cout << arr.size() << endl;
  return 0;
}
