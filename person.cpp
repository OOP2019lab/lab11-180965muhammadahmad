#pragma once
#include "person.h"

person::person()
{
	cout<<"person default called"<<endl;
	first_name="";
	last_name="";
	age=0;
}
person::person(string F_name, string L_name, int x )
{
	cout<<"person parametrized called"<<endl;
	first_name=F_name;
	last_name=L_name;
	age=x;
	
}

person::~person()
{
	cout<<"person dest called"<<endl;
}

string person:: getFname()const
{
	return first_name;
}
string person:: getLname()const	
{
	return last_name;
}
	int person:: getAge()const
	{
		return age;
	}
	void person::setFname(string x )
	{
		first_name=x;
	}
	void person::setLname(string y)
	{
		last_name=y;
	}
void person:: setAge(int y)
{
		age=y;
}

void person::printinformation()
{
	cout<<first_name;
	cout<<" "<<last_name;
	cout<<" is "<<age<<" years old"<<endl;

}
