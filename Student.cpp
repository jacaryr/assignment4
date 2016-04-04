/**************************************
* CPSC 1020 Programming Assignment #4 *
* Classes and Object-Oriented Prog		*
* Instructor: Lanny Sitanayah         *
***************************************
* Group Members:                      *
* Brandon Bosh                        *
* Elizabeth Hill                      *
* Sean Myers                          *
* Omar Richardson	                    *
***************************************
* Student.cpp                         *
**************************************/
#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

//Constructors and Destructors
Sudent::Student()
{

}

Student::Student(string fName, string lName, float sgpa, string sclass, int smaxCredit, int scurCredit)
{

}

Student::~Student()
{

}

//Functions
void Student::setGPA(float gpa)
{
  GPA = gpa;
}

void Student::setClassStanding(string classS)
{
  classStanding = classS;
}

void Student::setCurCredit(int credit)
{
  curCredit = credit;
}

float Student::getGPA()
{
  return(GPA);
}

string Student::getClassStanding()
{
  return(classStanding);
}

int Student::getCurCredit()
{
  return(curCredit);
}
