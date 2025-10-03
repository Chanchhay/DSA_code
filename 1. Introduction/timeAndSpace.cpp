#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
typedef unsigned long long ull;
ull sum1(ull n)
{
  auto start = high_resolution_clock::now();
  ull sum = 0;
  for (ull i = 1; i <= n; i++)
  {
    sum += i;
  }
  auto end = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(end - start);
  cout << "Time taken by loop: " << duration.count() << " microseconds" << endl;
  return sum;
}
ull sum2(ull n)
{
  auto start = high_resolution_clock::now();
  ull sum = (n * (n + 1)) / 2;
  auto end = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(end - start);
  cout << "Time taken by formula: " << duration.count() << " microseconds" << endl;
  return sum;
}
int main()
{
  system("cls");
  ull n = 1000000000;
  ull result1 = sum1(n);
  ull result2 = sum2(n);
  cout << "Sum using loop: " << result1 << endl;
  cout << "Sum using formula: " << result2 << endl;
  return 0;
}
