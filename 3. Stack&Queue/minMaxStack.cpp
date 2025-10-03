#include <bits/stdc++.h>
using namespace std;

int findMin(stack<int> nums){
  auto minVal = nums.top();
  nums.pop();
  while(!nums.empty()){
    minVal = min(minVal, nums.top());
    nums.pop();
  }
  return minVal;
}
int findMax(stack<int> nums){
  auto minVal = nums.top();
  nums.pop();
  while(!nums.empty()){
    minVal = max(minVal, nums.top());
    nums.pop();
  }
  return minVal;
}
void displayStack(stack<int> nums){
  while(!nums.empty()){
    cout << nums.top() << " ";
    nums.pop();
  }
}
int main()
{
  system("clear");
  stack<int> nums;

  for (int i = 1; i <= 10; i++)
  {
    nums.push(i * 10);
  }
  displayStack(nums);
  cout << "\nMinimum is: " << findMin(nums) << endl;
  cout << "Max is: " << findMax(nums) << endl;
  return 0;
}
