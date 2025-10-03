#include <iostream>
#include<vector>
using namespace std;
void binarySort(vector<int>& arr){
  for (int i = 0; i < arr.size() -1; i++){
    for (int j = 0; j < arr.size() -i -1; j++){
      if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
    }
  }
}


int binarySearch(vector<int>& arr, int target){
int low = 0;
int high = arr.size() -1;
while (low <= high)
{
  int mid = low + (high -low) /2;
  if (arr[mid] == target) return mid;
  else if (arr[mid] > target) high = mid -1;
  else low = mid +1;
}

return -1;
}


int linearSearch(vector<int>& arr, int target){
  for (int i = 0; i < arr.size(); i++){
    if (arr[i] == target) return i;
  }

  return -1;
}
void printArray(vector<int>& arr){
  cout << "Our array: ";
  for (const auto val: arr){
    cout << val << " ";
  }
}
int main() {
system("clear");
vector<int> arr = {90, 10, 40, 50, 20};
int target = 50;
printArray(arr);
cout << endl;

cout << "=========================== Linear Search ===========================" << endl;
int index = linearSearch(arr, target);
if (index == -1) cout << "Target not found!!!" << endl;
  else cout << "Target found at index (count form 0): " << index << endl;

cout << endl;
binarySort(arr);
cout << "=========================== After sort ===========================" << endl;
printArray(arr);

cout << endl << endl;
cout << "=========================== Binary Search ===========================" << endl;
int index2 = binarySearch(arr, target);
if (index2 == -1) cout << "Target not found!!!" << endl;
else cout << "Target found at index (count from 0): " << index2 << endl;


    return 0;
}
