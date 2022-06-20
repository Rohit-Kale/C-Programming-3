/*  Write a program which accept range from user and display all even numbers in between 
that range */

#include<stdio.h>
#include<stdlib.h>

void PrintEven(int iStart,int iEnd)
{
	int i = 0;

	for(i = iStart; i < iEnd; i++)
	{
		
		if((i%2) == 0)
		{
			printf("%d\n",i);
		}
	}
}

int main()
{
	int iValue1 = 0, iValue2 = 0;

	printf("Enter Startig point\n");
	scanf("%d",&iValue1);

	printf("Enter Ending point\n");
	scanf("%d",&iValue2);

	PrintEven(iValue1,iValue2);


	return 0;
}