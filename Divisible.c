// Divisible by 5 or not

#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;

BOOL Check(BOOL iNo)
{
	if((iNo % 5) == 0)
	{
		return true;
	}

	else
	{
		return false;
	}
}

int main()
{
	int iValue = 0;
	BOOL bRet = false;

	printf("Enter Number \n");
	scanf("%d",&iValue);

	bRet = Check(iValue);

	if(bRet == true)
	{
		printf("Divisible by 5\n");
	}

	else
	{
		printf("Not Divisible by 5\n");
	}

	return 0;
}