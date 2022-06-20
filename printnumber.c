//print 5 time *

#include<stdio.h>
#include<stdlib.h>

void Accept(int iNo)
{
	int iCnt = 0;

	for(iCnt = 0; iCnt <= iNo; iCnt++)
	{
		printf("*\n");
	}
}

int main()
{
	int iValue = 5;

	Accept(iValue);

	return 0;
}