#include "Student.h"


void Student::SetName(const char* s)
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
	{
		this->name[i] = s[i];
	}
	this->name[i] = '\0';

}

void Student::GetName(char* s)
{
	int i;
	for (i = 0; this->name[i] != '\0'; i++)
	{
		s[i] = this->name[i];
	}
	s[i] = '\0';
}

void Student::SetMgrade(float x)
{
	if (x < 1)
		x = 1;
	else if (x > 10)
		x = 10;
	this->Mgrade = x;
}

float Student::GetMgrade()
{
	return this->Mgrade;
}

void Student::SetEgrade(float x)
{
	if (x < 1)
		x = 1;
	else if (x > 10)
		x = 10;
	this->Egrade = x;
}

float Student::GetEgrade()
{
	return this->Egrade;
}

void Student::SetHgrade(float x)
{
	if (x < 1)
		x = 1;
	else if (x > 10)
		x = 10;
	this->Hgrade = x;
}

float Student::GetHgrade()
{
	return this->Hgrade;
}

float Student::Average()
{
	float avg = this->Mgrade + this->Egrade + this->Hgrade;
	avg = avg / 3;
	return avg;

}