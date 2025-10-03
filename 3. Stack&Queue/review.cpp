#include <iostream>
#include <stack>
using namespace std;
void printStack(stack<int> stackNum){
  while(!stackNum.empty()){
    cout << stackNum.top() << " ";
    stackNum.pop();
  }
}

int main()
{
  system("clear");
  stack<int> stackNum;
  for (int i =1; i<=5; i++) stackNum.push(i*10);

  printStack(stackNum);
  cout << endl;
  cout << "After print top: " << stackNum.top() << endl;
  return 0;
}
