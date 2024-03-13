#include "NumberList.h"
#include <stdio.h>
using namespace std;

int main()
{
	NumberList L1;
	L1.Init();     //cream si initializam lista(vectorul) de numere L1
	L1.Add(1);
	L1.Add(5);
	L1.Add(4);
	L1.Add(2);
	L1.Add(3);    // adaugam in aceasta ordine elementele 1,5,4,2,3
	L1.Print();   //afisam lista
	L1.Sort();    //sortam lista
	L1.Print();   //o afisam din nou
	return 0;
}