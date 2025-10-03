#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  system("clear");
  stack<int> stackNumber;
  for (int i =1; i <= 8; i++) stackNumber.push(i*10);

  cout << "Values:  " << stackNumber.top() << endl;
  stackNumber.pop();
  cout << "Second top after remove: " << stackNumber.top() << endl;


  while(!stackNumber.empty()){
    cout << " " << stackNumber.top();
    stackNumber.pop();
  }
  cout << endl;
  return 0;
}
