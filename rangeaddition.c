/* Write a program which accept range from user and return addition of all numbers in between that range. */


#include<stdio.h>
#include<stdlib.h>

int RangeSum(int iStart,int iEnd)
{
	int i = 0;
	int iSum = 0;

	for(i = iStart; i < iEnd; i++)
	{
		
		iSum = iSum + i;
	}

	return iSum;
}

int main()
{
	int iValue1 = 0, iValue2 = 0, iRet = 0;

	printf("Enter Startig point\n");
	scanf("%d",&iValue1);

	printf("Enter Ending point\n");
	scanf("%d",&iValue2);

	iRet = RangeSum(iValue1,iValue2);
	printf("%d",iRet);

	return 0;
}


