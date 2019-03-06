#include <iostream>
#include <iomanip>
using namespace std;

#include "Storage.h"
#include "Storage.h"
#include "Student.h"

Storage::Storage()
{
  // tracks number of students in storage
  size = 0;
}

// deallocates the memory of all the dynamically allocated Student objects
// in the statically allocated array of student pointers
Storage::~Storage()
{
  for(int i=0; i<size;i++){
    delete students[i];
  }
}

// adds a student pointer to the end of the students array
void Storage::addStu(Student *c)
{
  // adds student pointer to collection
  students[size] = c;
  size++;
}

// prints out information of every individual student in collection
void Storage::print()
{
  for(int i=0; i<size;i++){
    students[i]->print();
  }
}

// returns the number of pointers stored in this Storage object
int Storage::getSize(){
  return size;
}
