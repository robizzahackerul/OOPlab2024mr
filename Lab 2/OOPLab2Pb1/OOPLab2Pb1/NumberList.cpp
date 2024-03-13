#include "NumberList.h"
#include <stdio.h>


void NumberList::Init() {
	this->count = 0;
	for (int i = 0; i < 10; i++)
		this->numbers[i] = 0;
}

bool NumberList::Add(int x) {
	if (this->count >= 10)
		return false;
	this->numbers[this->count] = x;
	this->count++;
}

void NumberList::Sort() {
	int ultim, i, k, aux;
	ultim = this->count - 1;
	while (ultim > 0)
	{
		k = ultim - 1; ultim = 0;
		for (i = 0; i <= k; i++)
			if (this->numbers[i] > this->numbers[i + 1])
			{
				aux = this->numbers[i];
				this->numbers[i] = this->numbers[i + 1];
				this->numbers[i + 1] = aux;
				ultim = i;
			}
	}

}


void NumberList::Print()
{
	printf("The list is:");
	for (int i = 0; i < count; i++)
		printf("%d ", this->numbers[i]);
	printf("\n");
}