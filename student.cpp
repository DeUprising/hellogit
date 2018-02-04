#include <iostream>
#include <string>
#include <vector>
#include "Student.h"

using namespace std;

int main() 
 {
  Student pupils;
  vector<Student>myStudents;
  string name;
  int age;
  do
  {
   cout <<"Enter name of student: ";
   cin>>name;
   pupils.setname(name);
   cout << endl;
   cout << "Enter age of student: ";
   cin >> age;
   pupils.setage(age);
   myStudents.push_back(pupils);
  } while(age);

  for (int i=0; i < myStudents.size(); i++)
  {
   cout << myStudents[i].getname();
   cout << myStudents[i].getage();
   cout << endl;
  }
  return 0;
}
