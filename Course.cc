#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Course.h"

Course::Course(int c, int g, int t, string i)
{
  code  = c;
  grade = g;
  term = t;
  instructor = i;
}

// prints out a courses, code, term, instructor and grade in that order
void Course::print()
{
  string str;

  cout << "-- COMP " << code << ":  ";
  cout << right << setw(4) << term   << "  ";
  cout << right << setw(32) << instructor   << "  ";
  cout << right << setw(2) << grade   << "  ";
  getGradeStr(str);
  cout << left << setw(3) << str << endl;

}

// converts int representation of a grade into letter grade representation
void Course::getGradeStr(string& gradeStr)
{
  string gradeStrings[] = {
    "WDN", "F", "D-", "D", "D+", "C-", "C", "C+",
    "B-", "B", "B+", "A-", "A", "A+" };

  if ( grade >= -1 && grade <= 12 )
    gradeStr = gradeStrings[grade+1];
  else
    gradeStr = "Unknown";
}
