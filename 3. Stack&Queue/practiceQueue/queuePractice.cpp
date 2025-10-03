#include <bits/stdc++.h>
using namespace std;
class RewardQueue
{
private:
  queue<string> people;

public:
  queue<string> getAllPeople()
  {
    return people;
  }
  void enqueue(string person)
  {
    cout << " ✅ Name : " << person
         << " has successfully enrolled "
         << endl;
    people.push(person);
  }

  void dequeue()
  {
    if (people.empty())
    {
      cout << " ❌ There is people to remove from the system "
           << endl;

      return;
    }
    people.pop();
  }
};

void printPeople(queue<string> people)
{
  if (people.empty())
  {
    cout << " ⚠️ Data is empty....! " << endl;
    return;
  }
  int counter = 0;

  cout << "\n All people in our reward system.." << endl;
  while (!people.empty())
  {
    cout << "\t" << (++counter) << ". " << people.front()
         << endl;
    people.pop();
  }
}
void printPeople(queue<string> people, int n)
{
  if (people.empty() ||
      n <= 0)
  {
    cout << " ⚠️ Data is empty....! " << endl;
    return;
  }
  int counter = 0;
  int limiter = 0;

  cout << "\n 🎊 All Winners Are..🎊 " << endl;
  while (!people.empty() && limiter < n)
  {
    cout << "\t" << (++counter) << ". " << people.front()
         << endl;
    people.pop();
    limiter++;
  }
}

// Create a function in order to init the data
int main()
{
  system("clear");
  RewardQueue rewardQueue;
  int op;

  do
  {
    cout << "----------------[[[ Reward Program]]]-------------" << endl;
    cout << "1. Enroll person " << endl;
    cout << "2. Remove person " << endl;
    cout << "3. Show all names " << endl;
    cout << "4. Select top winners " << endl;
    cout << "5. Exit " << endl;
    cout << "Choose your choice: ";
    cin >> op;

    switch (op)
    {
    case 1:
    {
      string name;
      cout << "Enter person name: ";
      cin.ignore();
      getline(cin, name);
      rewardQueue.enqueue(name);
    }
    break;
    case 2:
      rewardQueue.dequeue();
      break;
    case 3:
      printPeople(rewardQueue.getAllPeople());
      break;
    case 4:
      // show only n people
      {
        int n;
        cout << "Input amount of people: ";
        cin >> n;
        printPeople(rewardQueue.getAllPeople(), n);
      }
      break;
    case 5:
      cout << "Exit " << endl;
      break;
    }
  } while (op != 5);

  return 0;
}
