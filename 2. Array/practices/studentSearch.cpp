#include <iostream>
#include <vector>
using namespace std;
class Student
{
public:
  int id;
  string name;
  float score;
  string classname;

  Student(int id, string name, float score, string classname)
  {
    this->id = id;
    this->name = name;
    this->score = score;
    this->classname = classname;
  }
  void output()
  {
    cout << " Student ID: " << id << endl;
    cout << " Student Name: " << name << endl;
    cout << " Student Score: " << score << endl;
    cout << " Student Classroom: " << classname << endl;
  }
};

void printStudent(vector<Student> &students)
{
  for (auto student : students)
  {
    student.output();
    cout << endl;
  }
  cout << endl;
}

int binarySearch(vector<Student> &students, int id)
{
  int low = 0;
  int high = students.size() - 1;
  while (low <= high)
  {
    int mid = low + (high - low) / 2;
    if (students[mid].id == id)
      return mid;
    else if (students[mid].id > id)
      high = mid - 1;
    else
      low = mid + 1;
  }

  return -1;
}
int main()
{
  system("clear");
  vector<Student> studentList = {
      Student(1001, "james", 90, "Data Analytics"),
      Student(1002, "jojo", 80, "Web dev"),
      Student(1003, "koko", 70, "Spring"),
      Student(1004, "rozo", 50, "Blockchain"),
      Student(1005, "zoro", 20, "Data"),
  };

  printStudent(studentList);

  int studentId = 1001;
  int index = binarySearch(studentList, studentId);
  if (index == -1)
    cout << "Student with id: " << studentId << " not found" << endl;
  else
  {
    cout << "====================================" << endl;
    cout << "Student with id: " << studentId << " found at index: " << index << endl;
    cout << "\n[+]Student Details : " << endl;
    studentList[index].output();
    cout << "====================================" << endl;
  }


  return 0;
}
