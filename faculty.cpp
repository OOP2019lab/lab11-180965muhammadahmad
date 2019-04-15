#pragma once
#include "faculty.h"

faculty::faculty():phone_ext(0),course_count(0),person()
{
	cout<<"faculty default called"<<endl;
	
}
faculty::faculty(int x,int y ,string F_name, string L_name, int z):course_count(x), phone_ext(y),person(F_name,L_name, z)
{
	cout<<"faculty para called"<<endl;
	
}
faculty::~faculty()
{
cout<<" faculty destructor called"<<endl;
}

int faculty:: getcourse_count()const
{
	return course_count;
}
int faculty:: getPhone_ext()const
{
	return phone_ext;

}
void faculty:: setcourse_count(int x)
{
	course_count=x;
}
void faculty:: setphone(int y )
{
	phone_ext=y;
}
void faculty::printfaculty()
{
	cout<<"Faculty member name: "<<getFname()<<" "<<getLname()<<" , age= "<<age<<" ,number of courses= "<<course_count<<", Ext= "<<phone_ext<<endl;

}