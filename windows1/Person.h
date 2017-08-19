#include <string.h>

#pragma once
class Person
{
private:
	char name[64];
public:
	Person();
	~Person();

	void setPerson(char * n);
	char * getPerson();
};

