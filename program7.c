/*
. Accept number of rows and number of columns from user and display below pattern.
Input : iRow = 4 iCol = 3
Output : 
 1 2 3
 1 2 3
 1 2 3
 1 2 3
 */

#include<stdio.h>
#include<stdlib.h>


void Pattern(int iRow,int iCol)
{
	int i = 0, j = 0;

	for(i = 1; i <= iRow; i++)
	{
		for(j = 1; j <= iCol; j++)
		{
			
			printf("%d\t",j);

		}

		printf("\n");
	}

}

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;

	printf("Enter number of Rows\n");
	scanf("%d",&iValue1);

	printf("Enter number of Columns\n");
	scanf("%d",&iValue2);

	Pattern(iValue1,iValue2);

	return 0;
}
