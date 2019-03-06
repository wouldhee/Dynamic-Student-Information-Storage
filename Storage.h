#ifndef Storage_H
#define Storage_H

const int MAX_ARR = 128;

#include <string>
#include "Student.h"
using namespace std;



class Storage
{
  public:
    Storage(); // constructor
    ~Storage(); // destructor
    void addStu(Student*); // adds student pointer to static array
    int getSize(); // returns number of students currently stored
    void print(); // prints out all information stored


  private:
    Student* students[MAX_ARR]; // array of Student pointers
    int size; // number of student pointers currently stored



};
#endif
