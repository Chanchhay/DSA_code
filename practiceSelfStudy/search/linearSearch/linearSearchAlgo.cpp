#include <iostream>
#include <array>
using namespace std;
// algorithm search
int linearSearch(int arr[], int n, int val)
{
  for (int i = 0; i <= n; i++)
  {
    if (arr[i] == val)
      return i + 1;
    else
      return -1;
  }
}

int main()
{
  system("cls");
  // initialize value
  int arr[] = {10, 11, 40, 22, 44, 66, 22, 77, 89, 44};
  int val = 10;
  int n = sizeof(arr) / sizeof(arr[0]); // calculate size of array
  int result = linearSearch(arr, n, val);

  // 3 jur nis loop print array
  cout << "The element of array are: ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";

  // jur krom nis print result
  cout << "\nElement yg search: " << val;
  if (result == -1)
    cout << "\nElement yg search ot mean te !!" << endl;
  else
    cout << "\nElement yg search mean nv Index ti : " << result << endl;

  return 0;
}
