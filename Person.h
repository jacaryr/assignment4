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
* Person.h									          *
**************************************/
#ifndef PERSON_H
#define PERSON_H
class Person
{
	private:
		string firstName;
		string lastName;

	public:
		/*constructors and destructors*/
		Person();
		Person(string, string);
		~Person();

		/*setters and getters*/
		void setFirstName(string firstn);
		void setLastName(string lastn);
		string getFirstName();
		string getLastName();

		/*Member Functions (Methods)*/
		void printPInfo();
};
#endif
