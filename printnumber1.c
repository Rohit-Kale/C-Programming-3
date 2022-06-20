//print * by user input


#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
	int iCnt = 0;

	while(iCnt < iNo)
	{
		printf("*\n");
		iCnt++;
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