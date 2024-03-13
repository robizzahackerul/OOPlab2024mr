#include "Global.h"


int comparebyname(Student* s1, Student* s2)
{
	int i;
	char name1[50], name2[50];
	s1->GetName(name1);
	s2->GetName(name2);
	for (i = 0; name1[i] != '\0'; i++)
		if (name1[i] != name2[i])
		{
			if (name2[i] == '\0')
				return 1;
			else if (name1[i] > name2[i])
				return 1;
			else
				return -1;
		}
	if (name2[i] != '\0')
		return -1;
	return 0;
}

int comparebyMgrade(Student* s1, Student* s2)
{
	float g1, g2;
	g1 = s1->GetMgrade();
	g2 = s2->GetMgrade();
	if (g1 > g2)
		return 1;
	if (g1 < g2)
		return -1;
	return 0;
}

int comparebyEgrade(Student* s1, Student* s2)
{
	float g1, g2;
	g1 = s1->GetEgrade();
	g2 = s2->GetEgrade();
	if (g1 > g2)
		return 1;
	if (g1 < g2)
		return -1;
	return 0;
}

int comparebyHgrade(Student* s1, Student* s2)
{
	float g1, g2;
	g1 = s1->GetHgrade();
	g2 = s2->GetHgrade();
	if (g1 > g2)
		return 1;
	if (g1 < g2)
		return -1;
	return 0;
}

int comparebyAverage(Student* s1, Student* s2)
{
	float g1, g2;
	g1 = s1->Average();
	g2 = s2->Average();
	if (g1 > g2)
		return 1;
	if (g1 < g2)
		return -1;
	return 0;
}