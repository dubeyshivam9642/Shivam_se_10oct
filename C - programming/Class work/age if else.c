#include<stdio.h>
void main()
{
	int age;
	printf("Enter your age\n");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("you are eluigible for voting\n");
	}
	else
	{
		printf("you are not eligible for voting\n");
	}
}
