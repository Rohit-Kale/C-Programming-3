/* Write a program which accept number from user and return difference between summation of all its factors and non factors */

#include<stdlib.h>
#include<stdio.h>

int FactDiff(int iNo)
{
	int iCnt = 0;
	int iFact = 0;
	int iNonFact = 0;
	int iDiff = 0;

	for(iCnt = 1; iCnt < iNo; iCnt++)
	{
		if(iNo%iCnt == 0)
		{
			
			iFact = iFact + iCnt;

		}

		else
		{
			
			iNonFact = iNonFact + iCnt;

		}
	}

	iDiff = iFact - iNonFact;

	return iDiff;
}

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter Number\n");
	scanf("%d",&iValue);

	iRet = FactDiff(iValue);

	printf("%d",iRet);

	return 0;
}