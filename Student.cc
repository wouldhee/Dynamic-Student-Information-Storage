#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Student.h"

Student::Student(int i)
{
  id = i;
  numCourses = 0;
}

// deallocates the dynamically allocated memory used by the Course objects
// stored in this statically defined array of Course pointers
Student::~Student(){
  for(int i=0; i<numCourses;i++){
    delete courses[i];
  }
}

// adds a course pointer to the end of the Course pointer array
void Student::addCourse(Course *c){
  courses[numCourses] = c;
  numCourses++;
}

// prints out all course's information stored in this object
void Student::print()
{
  cout<< endl << "Id: " << id << endl;

  for (int i=0; i<numCourses; ++i){
    courses[i]->print();
  }
}
