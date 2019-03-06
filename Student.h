#ifndef STUDENT_H
#define STUDENT_H

#include "defs.h"
#include "Course.h"

class Student
{
  public:
    Student(int=0); // constructor
    ~Student(); // destructor
    void addCourse(Course*); // adds Course pointer to static array of pointers
    void print(); // prints out all information stored on Courses this student is taking

  private:
    int    id; // student id number
    Course* courses[MAX_NUM_COURSES]; // array of Course pointers
    int    numCourses; // current number of Courses stored
};

#endif
