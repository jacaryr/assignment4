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
* CpscCourse.h							          *
**************************************/
#ifndef CPSCCOURSE_H
#define CPSCCOURSE_H
/*This class holds the information about the cpsc courses*/
class CpscCourse
{
	private:
		string courseName;
		int courseNum;
		int courseSect;
		int availSeats; //available seats
		int openSeats;

	public:
		/*Constructors*/
		//Default Constructor
		CpscCourse();

		//Parameterized Constructor
		CpscCourse(string, int, int, int, int);

		/*Destructors*/
		~CpscCourse();

		/*Setters*/
		void setCourseName(string);
		void setCourseNum(int);
		void setCourseSect(int);
		void setAvailSeats(int);
		void setOpenSeats(int);

		/*Getters*/
		string getCourseName();
		int getCourseNum();
		int getCourseSect();
		int getAvailSeat();
		int getOpenSeats();

		/*Member Functions (Methods)*/
		void printInfo();
		static int courseID;
};
#endif
