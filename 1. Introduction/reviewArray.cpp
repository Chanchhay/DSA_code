#include <iostream>
using namespace std;
int main()
{
  system("cls");
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  const int row = 2;
  const int col = 5;
  int array2D[row][col] = {
      {1, 2, 3, 4, 5},
      {6, 7, 8, 9, 10}};
  cout << "Array elements are: ";
  for (auto element : arr)
  {
    cout << element << " ";
  }
  cout << endl;
  cout << "2D Array elements are: " << endl;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout << " " << array2D[i][j];
    }
    cout << endl;
  }
  cout << endl;
  cout << "Print array using foreach loop: " << endl;
  for (auto &element : array2D)
  {
    for (auto element2 : element)
    {
      cout << " " << element;
    }
    cout << endl;
  }
  cout << endl;
  return 0;
}
