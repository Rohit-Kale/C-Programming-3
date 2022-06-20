#include<stdio.h>
#include<stdlib.h>

void Display()
{
	int i = 5;
	//i = 5;

	while(i >= 1)
	{
		printf("%d\n",i);
		i--;
	}
}

int main()
{
	Display();

	return 0;
}