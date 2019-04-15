// iinheritance.cpp : Defines the entry point for the console application.
//
#include"person.h"
#include"faculty.h"
#include "student.h"


int main()
{
	student s1(3.91,"Ted","Thompson",22);
	faculty F1(2,420,"Richard","Karp",45);
	
	//*********** output**************//

	/*person parametrized called
	student para called
	person parametrized called
	faculty para called
	faculty destructor called
	person dest called
	student destructor called
	person dest called*/

	//****************************************//

	s1.printinformation();
	s1.printstudent();
	cout<<endl;
	F1.printfaculty();

	//********task 8****************//
	//Error	2	error C2247: 'person::printinformation' not accessible because 'student' uses 'protected' to inherit from 'person'	c:\users\temp.domain.003\desktop\iinheritance\iinheritance\iinheritance.cpp	26
	//*************//
	//******task9******//
	//Error	2	error C2247: 'person::printinformation' not accessible because 'student' uses 'private' to inherit from 'person'	c:\users\temp.domain.003\desktop\iinheritance\iinheritance\iinheritance.cpp	26



	return 0;
}

