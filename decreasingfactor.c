/* Write a program which accept number from user and display its factors in decreasing 
order */

#include<stdio.h>
#include<stdlib.h>

void RevFact(int iNo)
{
	int iCnt = 0;

	for(iCnt = iNo/2; iCnt <= iNo/2; iCnt++)
	{
		if(iNo % iCnt == 0)
		{

			printf("%d\n",iCnt);

		}
	}
}

int main()
{
	int iValue = 0;

	printf("Enter Number\n");
	scanf("%d",&iValue);

	RevFact(iValue);

	return 0;
}
