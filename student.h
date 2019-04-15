#pragma once

#include "person.h"

class student:public person
{
private:
	float cgpa;
public:
	student(float ,string ,string ,int  );
	~student();
	float getcgpa()const;
	void setcgpa(float );
	void printstudent();

};