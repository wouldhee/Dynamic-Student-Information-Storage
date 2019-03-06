#include <iostream>
using namespace std;
#include <string>

#include "defs.h"
#include "Student.h"
#include "Storage.h"

int  mainMenu();

// add as many Dynamically allocated student objects to the
// Storage object as the user likes then print out
// the contents of the Storage object
int main()
{
  Storage storage = Storage();
  int     numCourses;
  int     stuId, courseCode, grade, term;
  string instructor;
  int     menuSelection;

  while (1) {
    menuSelection = mainMenu();

    if (menuSelection == 0)
      break;

    else if (menuSelection == 1) {
      Student *sptr;
      cout << "student id:   ";
      cin  >> stuId;

      sptr = new Student(stuId);

      // add all course to student
      while (1) {
        cout << "course code <0 to end>:  ";
        cin  >> courseCode;
        if (courseCode == 0)
          break;
        cout << "grade:                   ";
        cin  >> grade;

        cout << "term:                   ";
        cin  >> term;
        cin.ignore();
        cout << "instructor:              ";
        getline(cin, instructor);

        Course *cptr = new Course(courseCode, grade, term, instructor);

        sptr->addCourse(cptr);
      }
      storage.addStu(sptr);
    }
  }

  if (storage.getSize() > 0)
    storage.print();

  return 0;
}

int mainMenu()
{
  int numOptions = 1;
  int selection  = -1;

  cout << endl;
  cout << "(1) Add student" << endl;
  cout << "(0) Exit" << endl;

  while (selection < 0 || selection > numOptions) {
    cout << "Enter your selection: ";
    cin  >> selection;
  }

  return selection;
}
