/* Write a program which accept number from user and print factors of that 
number */

#include<stdio.h>
#include<stdlib.h>

void DisplayFact(int iNo)
{
	int i = 0;

	if(iNo <= 0)
	{
		iNo = -iNo;
	}

	for(i = 1; i <= iNo / 2; i++)
	{
		if(iNo % i == 0)
		{

			printf("%d\n",i);

		}
		

	}
}

int main()
{
	int iValue = 0;

	printf("Enter Number\n");
	scanf("%d",&iValue);

	DisplayFact(iValue);

	return 0;
}