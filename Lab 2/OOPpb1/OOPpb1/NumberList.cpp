#include "NumberList.h"

void NumberList::Init()
{
	count = 0;
}

bool NumberList::Add(int x)
{
	if (count >= 10)
	{
		return false;
	}
	else {
		this->numbers[count] = x;
		count++;
	}
}


void NumberList::Sort() 
{
    bool sortat;
    do
    {
        sortat = true;
        for (int i = 0; i < this->count - 1; i++)
            if (this->numbers[i] > this->numbers[i + 1])
            {
                int aux = this->numbers[i];
                this->numbers[i] = this->numbers[i + 1];
                this->numbers[i + 1] = aux;
                sortat = false;
            }
    } while (!sortat);
}

void NumberList::Print() {
    for (int i = 1; i <= this->count; i++)
        printf("%d ", this->numbers[i]);
}
