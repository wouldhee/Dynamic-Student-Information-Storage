#ifndef COURSE_H
#define COURSE_H

class Course
{
  public:
    Course(int=0, int=0, int=000000, string="");
    void print();

  private:
    int code;	// course code, for example 2404 for COMP2404
    int grade;	// numeric grade from 0 (F) to 12 (A+), with -1 for WDN
    int term; // term course was taken during: 10= winter 20= summer 30= fall
    string instructor; // Courses's professor's name
    void getGradeStr(string&);
};

#endif
