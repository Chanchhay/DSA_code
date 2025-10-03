## Linear Search Algorithm
### algorithm nis merl ot yul te
> Linear_Search(a, n, val) // 'a' is the given array, 'n' is the size of given array, 'val' is the - value to search
- Step 1: set pos = -1
- Step 2: set i = 1
- Step 3: repeat step 4 while i <= n
- Step 4: if a[i] == val
- set pos = i
- print pos
- go to step 6
- [end of if]
- set ii = i + 1
- [end of loop]
- Step 5: if pos = -1
- print "value is not present in the array "
- [end of if]
- Step 6: exit
---
### nis note and code for the algorithm

### function
```int linearSearch(int arr[], int n, int val)
{
  for (int i = 0; i <= n; i++)
  {
    if (arr[i] == val)
      return i + 1;
    else
      return -1;
  }
}
```
### inside int main
```
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
```
