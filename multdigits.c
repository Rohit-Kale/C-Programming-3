/* Write a program which accept number from user and return multiplication of all digits. */

#include<stdio.h>
#include<stdlib.h>

int MultDigit(int iNo)
{
	int iDigit = 0;
	int iMult = 1;

	while(iNo != 0)
	{

		iDigit = iNo % 10;
		iMult = iMult * iDigit;
		iNo = iNo / 10;

	}

	return iMult;
}

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter Number\n");
	scanf("%d",&iValue);

	iRet = MultDigit(iValue);
	printf("%d",iRet);

	return 0;
}
