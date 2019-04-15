#pragma once

#include "student.h"




student::student(float x ,string Fname ,string Lname ,int Y):cgpa(x),person(Fname,Lname,Y)
{
	cout<<"student para called"<<endl;
	
}
student::~student()
{
		cout<<"student destructor called"<<endl;
}

float  student::getcgpa()const
{
	return cgpa;
}
void student:: setcgpa(float x)
{
	cgpa=x;
}
	
void student::printstudent()
{
	cout << getFname() << "" << getLname()
     << "is " << age <<" years old, his cgpa is " << cgpa;


}