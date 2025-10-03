#include <iostream>
using namespace std;
void printArray(int arr[], int n){
  for (int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}
void selectionSort(int arr[], int n){
  for (int i = 0; i < n; i++){
    int min = i;
    for (int j = i + 1; j < n; j++){
        if (arr[min] > arr[j]){
        min = j;
      }
    }
    int temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
  }
}
int main() {
system("cls");
int arr[] = {99, 11, 55, 66, 33, 64};
int n = sizeof(arr)/sizeof(arr[0]);
cout << "This is our array: ";
printArray(arr, n);
selectionSort(arr, n);
cout << "This is our array after sort: ";
printArray(arr, n);
    return 0;
}
