#include "Math.h"
#include <cstdio>
using namespace std;

int main()
{
	char* p;
	Math m;
	printf("Suma a doua nr intregi: %d\n", m.Add(2, 7));
	printf("Suma a trei nr intregi: %d\n", m.Add(2, 7, 5));
	printf("Suma a doua nr reale: %d\n", m.Add(2.5, 7.5));
	printf("Suma a trei nr reale: %d\n", m.Add(2.3, 7.4, 8.6));
	printf("Produsul a doua nr intregi: %d\n", m.Mul(2, 7));
	printf("Produsul a trei nr intregi: %d\n", m.Mul(2, 7, 5));
	printf("Produsul a doua nr reale: %d\n", m.Mul(2.7, 7.2));
	printf("Produsul a trei nr reale: %d\n", m.Mul(2.5, 4.0, 1.0));
	printf("Suma a n nr intregi: %d\n", m.Add(6, 1, 2, 3, 4, 5, 6));
	printf("Suma a doua nr mari: %s\n", p = m.Add("999", "1"));
	delete[] p;

	return 0;
}