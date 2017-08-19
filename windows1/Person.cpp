#include "stdafx.h"
#include "Person.h"
#include <string.h>


Person::Person()
{
}


Person::~Person()
{
}


void Person::setPerson(char * n) {
	strcpy_s(name, n);
}

char * Person::getPerson() {
	return &name[0];
}


