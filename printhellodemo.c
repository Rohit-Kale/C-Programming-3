//print hello if value less than 10 otherwise print Demo

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
	if(iNo < 10)
	{

		printf("Hello\n");

	}

	else
	{

		printf("Demo\n");

	}
}

int main()
{
	int iValue = 0;

	printf("Enter Number\n");
	scanf("%d",&iValue);

	Display(iValue);

	return 0;
}