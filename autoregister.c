#include<stdio.h>
#include<stdlib.h>

void fun()              //Function Defination
{
	int i = 11;
	int j;
	auto int k;
	auto int l = 11;

}

void gun()           //Function Defination 
{
	register int x = 11;
	register int y;
}

int main() 
{
	printf("Inside Main...");

	fun();
	gun();

	return 0;
}
