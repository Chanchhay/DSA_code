#include <iostream>
#include <vector>
using namespace std;
void printPairs(vector<int> &arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    for (int j = 0; j < arr.size(); j++)
    {
      cout << " " << arr[i] << " " << arr[i] << endl;
    }
    cout << endl;
  }
}
int main()
{
  system("clear");
  vector<int> values = {11, 22, 33};
  printPairs(values);

  return 0;
}
