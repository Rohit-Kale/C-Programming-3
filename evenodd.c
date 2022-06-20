// Accept number from user and check whether number is even or odd.


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef int BOOL;

BOOL CheckEven(int iNo)
{
	if((iNo % 2)==0)
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

	printf("Enter Number\n");
	scanf("%d",&iValue);

	bRet = CheckEven(iValue);

	if(bRet == true)
	{
		
		printf("%d is even number\n",iValue);

	}

	else
	{
		
		printf("%d is odd number\n",iValue);

	}

	return 0;
}