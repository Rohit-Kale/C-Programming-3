// Accept number from user and display below pattern.


#include<stdlib.h>
#include<stdlib.h>

void Pattern(int iNo)
{
	int iCnt = 0;
	char ch = 'A';

	for(iCnt = iNo; iCnt >= 1; iCnt--)
	{
		
		printf("%c\t",ch);
		ch++;

	}

}

int main()
{

	int iValue = 0;

	printf("Enter Number of Elements\n");
	scanf("%d",&iValue);

	Pattern(iValue);


}