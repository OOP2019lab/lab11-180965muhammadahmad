#pragma once


#include<iostream>
using namespace std;
#include <string>


class person
{
private:
	string first_name;
	string last_name;
protected:
	int age;
public:
	person();
	person(string , string , int );
	~person();
	string getFname()const;
	string getLname()const;
	int getAge()const;
	void setFname(string );
	void setLname(string );
	void setAge(int );
	void printinformation();




};