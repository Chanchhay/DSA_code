#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>&arr, int target){
  int low = 0;
  int high = arr.size() - 1;
  while(low<=high){
    int mid = low + (high - low )/2;
    if (arr[mid] == target) return mid;
    else if (arr[mid] > target) high = mid -1;
    else low = mid + 1;
  }
}

void bubbleSort(vector<int>&arr) {
  for (int i = 0; i < arr.size() -1; i++){
    for (int j = 0; j < arr.size() -i -1; j++){
      if (arr[j] > arr[j+1]){
        swap(arr[j], arr[j+1]);
      }
    }
  }
}

void printArray(vector<int>&arr){
  for (const auto val: arr)
    cout << " " << val;
  cout << endl;
}

int main() {
system("clear");
vector<int> arr ={11,50,90,19,44};
cout << "Array before sort: ";
printArray(arr);
bubbleSort(arr);
cout << "Array after sort: ";
printArray(arr);

int target = 44;
int index = binarySearch(arr, target);
if(index == -1){
  cout << "Item : " << target << " not found" << endl;
}else cout << "Item : " << target << " found at index : " << index << endl;

    return 0;
}
