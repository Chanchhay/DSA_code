#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
typedef long long ll;
// void prllArray(ll arr[], ll size)
// {
//   cout << "Prlling Array: " << endl;
//   for (ll i = 0; i < size; i++)
//   {
//     cout << " " << arr[i];
//   }
//   cout << endl;
// }
ll linearSearch(ll arr[], ll size, ll target)
{
  auto startTime = high_resolution_clock::now();
  for (ll i = 0; i < size; i++)
  {
    if (target == arr[i])
    {
      auto endTime = high_resolution_clock::now();
      auto duration = duration_cast<nanoseconds>(endTime - startTime);
      cout << "Duration for linear is = " << duration.count() << " nanoseconds." << endl;
      return i;
    }
  }
  auto endTime = high_resolution_clock::now();
  auto duration = duration_cast<nanoseconds>(endTime - startTime);
  cout << "Duration for linear is = " << duration.count() << " nanoseconds." << endl;
  return -1;
}
ll binarySearch(ll arr[], ll size, ll target)
{
  auto startTime = high_resolution_clock::now();
  ll low = 0;
  ll high = size - 1;
  while (low <= high)
  {
    ll mid = low + (high - low) / 2;
    if (target == arr[mid])
    {
      auto endTime = high_resolution_clock::now();
      auto duration = duration_cast<nanoseconds>(endTime - startTime);
      cout << "Duration for binary is = " << duration.count() << " nanoseconds." << endl;
      return mid;
    }
    else if (target > arr[mid])
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }
  auto endTime = high_resolution_clock::now();
  auto duration = duration_cast<nanoseconds>(endTime - startTime);
  cout << "Duration for binary is = " << duration.count() << " nanoseconds." << endl;
  return -1;
}
int main()
{
  system("cls");
  const ll size = 10000000;
  // ll arr[]{10, 20, 30, 40, 50};
  ll arr[size];
  for (ll i = 0; i < size; i++)
  {
    arr[i] = i * 2;
  }
  // ll size = sizeof(arr) / sizeof(*arr);
  // prllArray(arr, size);
  // ll target = 30;
  ll target = -1;
  cout << "Using linear search with array: " << endl;
  ll linearIndex = linearSearch(arr, size, target);
  if (linearIndex == -1)
  {
    cout << "Item " << target << " not found." << endl;
  }
  else
  {
    cout << "Item " << target << " found at index " << linearIndex << "." << endl;
  }
  cout << "Using binary search with array: " << endl;
  ll binaryIndex = binarySearch(arr, size, target);
  if (binaryIndex == -1)
  {
    cout << "Item " << target << " not found." << endl;
  }
  else
  {
    cout << "Item " << target << " found at index " << binaryIndex << "." << endl;
  }
  return 0;
}
