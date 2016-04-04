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
* CpscCourse.cpp                      *
**************************************/
#include <iostream>
#include <string>
#include "CpscCourse.h"
using namespace std;

//Constructors and Destructors
CpscCourse::CpscCourse()
{

}

CpscCourse::CpscCourse(string name1, int courseN, int courseSct, int courseSt, int openS)
{

}
CpscCourse::~CpscCourse()
{

}

//Functions
//Setters
void CpscCourse::setCourseName(string name1)
{
  courseName = name1;
}

void CpscCourse::setCourseNum(int num1)
{
  courseNum = num1;
}

void CpscCourse::setCourseSect(int num2)
{
  courseSect = num2;
}

void CpscCourse::setAvailSeats(int num3)
{
  availSeats = num3;
}

void CpscCourse::setOpenSeats(int num4)
{
  openSeats = num4;
}

//Getters
string CpscCourse::getCourseName()
{
  return(courseName);
}

int CpscCourse::getCourseNum()
{
  return(courseNum);
}

int CpscCourse::getCourseSect()
{
  return(courseSect);
}

int CpscCourse::getAvailSeat()
{
  return(availSeats);
}

int CpscCourse::getOpenSeats()
{
  return(openSeats);
}

//Member Functions (Methods)
void CpscCourse::printInfo()
{

}

static int CpscCourse::courseID
{

}
