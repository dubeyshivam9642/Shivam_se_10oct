#include <stdio.h>
void add(int a, int b)
{
	printf("Addtion of %d and %d is %d",a,b,a+b);
}


void main()
{
	int a,b;
	printf("Welcome to simple calculator\n");
	printf("Enter number 1 : ");
	scanf("%d",&a);
	printf("\nEnter number 2 : ");
	scanf("%d",&b);
	add(a,b);
}