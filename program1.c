/* Accept number from user and display below pattern.
Input : 5
Output : A B C D E
	*/

#include<stdio.h>
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

	printf("\n");

}

int main()
{

	int iValue = 0;

	printf("Enter Number of Elements\n");
	scanf("%d",&iValue);

	Pattern(iValue);


}