/*  Write a program which accept range from user and display all numbers in between that 
range in reverse order.
 */

#include<stdio.h>
#include<stdlib.h>

void RangeRev(int iStart,int iEnd)
{
	int i = 0;

	for(i = iEnd; i > iStart; i--)
	{
		
		printf("%d\n",i);
		
	}
}

int main()
{
	int iValue1 = 0, iValue2 = 0;

	printf("Enter Startig point\n");
	scanf("%d",&iValue1);

	printf("Enter Ending point\n");
	scanf("%d",&iValue2);

	RangeRev(iValue1,iValue2);

	return 0;
}