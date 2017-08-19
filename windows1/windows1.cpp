// windows1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "Person.h"

int main()
{
	printf("hello windows");
	Person *p = new Person();
	p->setPerson("sridhar");

	printf("name = %s", p->getPerson());

    return 0;
}

