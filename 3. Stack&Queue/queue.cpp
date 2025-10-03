#include <iostream>
#include <queue>
using namespace std;
void printQueue(queue<int> queueNum)
{
  while (!queueNum.empty())
  {
    cout << queueNum.front() << " ";
    queueNum.pop();
  }
}
int main()
{
  system("clear");
  queue<int> queueNum;
  for (int i = 1; i <= 5; i++)
    queueNum.push(i * 10);
  cout << "Our numbers in queue: ";
  printQueue(queueNum);
  cout << "\nFront element is: " << queueNum.front() << endl;

  return 0;
}
