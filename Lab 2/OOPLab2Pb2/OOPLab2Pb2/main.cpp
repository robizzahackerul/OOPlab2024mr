#include "Student.h"
#include "Global.h"
#include <stdio.h>
using namespace std;

int main()
{
	char name1[50], name2[50], ord;
	Student s1, s2;
	s1.SetName("Ionescu A");
	s1.SetMgrade(9.60f);
	s1.SetEgrade(8.00f);
	s1.SetHgrade(9.40f);
	s2.SetName("Popescu M");
	s2.SetMgrade(9.60f);
	s2.SetEgrade(10.00f);
	s2.SetHgrade(7.50f);
	s1.GetName(name1);
	s2.GetName(name2);
	printf("Media studentului %s este :%.2f \n", name1, s1.Average());
	printf("Media studentului %s este :%.2f \n", name2, s2.Average());

	ord = comparebyname(&s1, &s2);
	if (ord == 1)
		printf("Primul student in ordine alfabetica este: %s \n", name2);
	else if (ord == -1)
		printf("Primul student in ordine alfabetica este: %s \n", name1);
	else
		printf("Ambii studenti au acelasi nume: %s \n", name1);

	ord = comparebyMgrade(&s1, &s2);
	if (ord == 1)
		printf("Primul student are nota mai mare la mate: %.2f \n", s1.GetMgrade());
	else if (ord == -1)
		printf("Al doilea student are nota mai mare la mate: %.2f \n", s2.GetMgrade());
	else
		printf("Ambii studenti au aceeasi nota la mate: %.2f \n", s1.GetMgrade());

	ord = comparebyEgrade(&s1, &s2);
	if (ord == 1)
		printf("Primul student are nota mai mare la engleza: %.2f \n", s1.GetEgrade());
	else if (ord == -1)
		printf("Al doilea student are nota mai mare la engleza: %.2f \n", s2.GetEgrade());
	else
		printf("Ambii studenti au aceeasi nota la engleza: %.2f \n", s1.GetEgrade());

	ord = comparebyHgrade(&s1, &s2);
	if (ord == 1)
		printf("Primul student are nota mai mare la istorie: %.2f \n", s1.GetHgrade());
	else if (ord == -1)
		printf("Al doilea student are nota mai mare la istorie: %.2f \n", s2.GetHgrade());
	else
		printf("Ambii studenti au aceeasi nota la istorie: %.2f \n", s1.GetHgrade());

	ord = comparebyAverage(&s1, &s2);
	if (ord == 1)
		printf("Primul student are media mai mare: %.2f \n", s1.Average());
	else if (ord == -1)
		printf("Al doilea student are media mai mare: %.2f \n", s2.Average());
	else
		printf("Ambii studenti au aceeasi medie: %.2f \n", s1.Average());
	return 0;
}