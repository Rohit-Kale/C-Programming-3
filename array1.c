// Program to take 5 values from the user and store them in an array
// Print the elements stored in the array

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[5];

	printf("Enter the 5 Integers :\n");

  // taking input and storing it in an array
	for(int i = 0; i < 5; ++i)
	{

		scanf("%d",&arr[i]);

	}

	printf("Displaying Integers:\n");

  // printing elements of an array
	for(int i = 0; i < 5; ++i)
	{

		printf("%d\n",arr[i]);

	}
	return 0;

}
