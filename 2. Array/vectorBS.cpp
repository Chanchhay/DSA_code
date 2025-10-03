#include <iostream>
#include <vector>
using namespace std;
void printArray(vector<int>&arr, string messages){
  cout << "[ " << messages << " ]" << endl;
  for (const auto val: arr){
    cout << " " << val;
  }
  cout << endl;
}
int binarySearch(vector<int>&arr, int target){
  int low = 0;
  int high = arr.size() - 1;
  while(low<=high){
    int mid = low + (high - low )/2;
    if (arr[mid] == target) return mid;
    else if (arr[mid] > target) high = mid -1;
    else low = mid + 1;
  }

  return -1;
}
int main() {
system("clear");
vector<int> arr = {12,44,55,66,89};
printArray(arr, "Print Array value: ");

int target = 440;
int index = binarySearch(arr, target);
if(index == -1){
  cout << "Item : " << target << " not found" << endl;
}else cout << "Item : " << target << " found at index : " << index << endl;
    return 0;
}
