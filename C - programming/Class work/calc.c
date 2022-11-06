#include<stdio.h>
void main()
{
	int a,b;
	printf("Welcome to Calculator");
	printf("\nEnter A = ");
	scanf("%d",&a);
	printf("\nEnter B = ");
	scanf("%d",&b);
	printf("\nA = %d,B = %d",a,b);
	
	printf("\n\nAddition = %d",(a+b));
	printf("\nsubstraction = %d",(a-b));
	printf("\nmultiplication = %d",(a*b));
	printf("\nDivision = %d",(a/b));
}