#pragma once
class Student
{
	char name[50];
	float Mgrade, Egrade, Hgrade;
public:
	void SetName(const char* s);
	void GetName(char* s);
	void SetMgrade(float x);
	float GetMgrade();
	void SetEgrade(float x);
	float GetEgrade();
	void SetHgrade(float x);
	float GetHgrade();
	float Average();
};

