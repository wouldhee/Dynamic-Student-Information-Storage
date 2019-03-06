## About

Program: sas.o
Revision Author: Dean Husar

## Purpose

To store objects of the student class and within them, store information about the courses they're currently enrolled in. Also, to retrieve that stored information.

## Files

### Source Files

`main.cc`, `Course.cc`, `Storage.cc`, `Student.cc`

### Header Files

`Course.h`, `Storage.h`, `Student.h`

### Data Files

`defs.h`, `in.txt`, `makefile`

## Usage

To start the program:
* `make` to compile
* `./sas < in.txt` to launch with text file as input
* If you want the output to go into a text file run:
  * `./sas < in.txt > filename.txt`
