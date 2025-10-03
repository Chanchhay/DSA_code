#include <bits/stdc++.h>
using namespace std;
void printStack(stack<int> values)
{
  while (!values.empty())
  {
    cout << " " << values.top();
    values.pop();
  }
  cout << endl;
}

int peek(stack<int> values, int pos)
{
  if (pos <= 0 || pos > values.size())
    throw runtime_error("Invalid position...!");
  // cout << "error" << endl;
  // return 1;

  for (int i = 1; i < pos; i++)
    values.pop();
  return values.top();
}

bool searchStack(stack<int> values, int key)
{
  while (!values.empty())
  {
    if (values.top() == key)
      return true;
      values.pop();
  }
  return false;
}

void reverse(stack<int>& values){
  stack<int> temp;
  while(!values.empty()){
    temp.push(values.top());
    values.pop();
  }
  values.swap(temp);
}

void sortStack(stack<int>& values){
  stack<int> temp;
  while(!values.empty()){
    int current = values.top();
    values.pop();
    while(!temp.empty() && temp.top() > current){
      values.push(temp.top());
      temp.pop();
    }
    temp.push(current);
  }
  values.swap(temp);
}



int main()
{
  system("clear");
  stack<int> sNum;
  for (int i = 1; i <= 5; i++)
    sNum.push(10 * i);

  int searchItem = 10;
  printStack(sNum);
  // cout << "Peek(1): " << peek(sNum, 10) << endl;
  cout << "Peek(2): " << peek(sNum, 1) << endl;
  cout << "Result of search item: " << searchItem << (searchStack(sNum, searchItem)?" Item found!" : "Item not found...") << endl;

  // cout << "[=====================After reversed stack =====================]" << endl;
  // reverse(sNum);
  // printStack(sNum);

  //calling sort stack
  sortStack(sNum);
  printStack(sNum);

  return 0;
}
