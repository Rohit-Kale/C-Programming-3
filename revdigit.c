/* Write a program which accept number from user and display its digits in reverse order. */
/* 1. Write a program which accept number from user and display its digits in reverse order.
	*/

#include<stdio.h>
#include<stdlib.h>

void RevDigit(int iNo)
{
	int iDigit = 0;

	if(iNo < 0)
	{
		
		iNo = -iNo;

	}

	while(iNo > 0)
	{
		iDigit = iNo%10;
		printf("%d\n",iDigit);
		iNo = iNo / 10;
	}
}

int main()
{
	int iValue = 0;

	printf("Enter Number\n");
	scanf("%d",&iValue);

	RevDigit(iValue);

	return 0;
}