#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
  int id;
  string name;
  string gender;
  float score;
  Student(int id, string name, string gender, float score)
  {
    this->id = id;
    this->name = name;
    this->gender = gender;
    this->score = score;
  }
  void display()
  {
    cout << "Student ID " << id << endl;
    cout << "Student name " << name << endl;
    cout << "Student gender " << gender << endl;
    cout << "Student score " << score << endl;
  }
};
vector<Student> getAllStudents()
{
  vector<Student> students = {
      Student(1090, "Jame", "male", 90),
      Student(1082, "Kopkop", "female", 70),
      Student(1056, "Kiki", "male", 60),
      Student(1002, "Koko", "female", 100),
      Student(1010, "Juju", "female", 50),
  };
  return students;
}

bool sortByScore(Student students1, Student students2)
{
  return students1.score > students2.score;
}
bool sortById(Student students1, Student students2)
{
  return students1.id > students2.id;
}

void bubbleSort(vector<Student> &students, bool byId, bool byScore)
{
  for (int i = 0; i < students.size() - 1; i++)
  {
    for (int j = 0; j < students.size() - i - 1; j++)
    {
      if (byId == true && byScore == false)
      {
        if (sortById(students[j], students[j + 1]))
          swap(students[j], students[j + 1]);
      }
      else if (byId == false && byScore == true)
      {
        if (sortByScore(students[j], students[j + 1]))
          swap(students[j], students[j + 1]);
      }
    }
  }
}

// void sortByScore(vector<Student>& students){
// for (int i = 0; i < students.size() -1; i++){
//   for (int j = 0; j < students.size() -i -1; j++){
//     if (students[j].score > students[j+1].score) swap(students[j].score, students[j+1].score);
//   }
// }
// }
int main()
{
  vector<Student> students = getAllStudents();
  cout << "======================================= Student data before sort =======================================" << endl;
  for (auto stu : students)
  {
    stu.display();
    cout << endl;
  }

  bubbleSort(students, true, false);
  cout << "======================================= Student data after sort by ID =======================================" << endl;
  for (auto stu : students)
  {
    stu.display();
    cout << endl;
  }

  bubbleSort(students, false, true);
  cout << "================================= Student data after sort by score =================================" << endl;
  for (auto stu : students)
  {
    stu.display();
    cout << endl;
  }

  return 0;
}
