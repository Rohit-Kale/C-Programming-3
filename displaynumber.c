//Accept two numbers from user and display first number in second number of times.

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo,int iFrequency)
{
	int i = 0;

	if(iFrequency < 0)
	{
		iFrequency = -iFrequency;
	}

	for(i = 1; i <= iFrequency; i++)
		{

			printf("%d\n",iNo);

		}
}

int main()
{
	int iValue = 0;
	int iCount = 0;

	printf("Enter Number\n");
	scanf("%d",&iValue);

	printf("Enter Frequency\n");
	scanf("%d",&iCount);

	Display(iValue,iCount);


}