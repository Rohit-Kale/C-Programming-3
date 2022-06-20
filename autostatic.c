#include<stdio.h>
#include<stdlib.h>

void fun()        //function Defination
{
	auto int i = 10;
	i++;

	printf("Value of i from fun is : %d\n",i);

}

void gun()        //function defination 
{
	static int i = 10;
	i++;

	printf("Value of i from gun is : %d\n",i);
}
int main()
{
	printf("Inside Main....\n");

	fun();
	fun();
	fun();
	gun();
	gun();
	gun();

	return 0;

}