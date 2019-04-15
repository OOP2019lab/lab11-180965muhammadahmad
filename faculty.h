#pragma once
#include "person.h"


class faculty:public person
{
private:
	int course_count;
	int phone_ext;
public:
	faculty();
	faculty(int ,int ,string ,string, int);
	~faculty();
	int getcourse_count()const;
	int getPhone_ext()const;
	void setcourse_count(int );
	void setphone(int );
	void printfaculty();

};