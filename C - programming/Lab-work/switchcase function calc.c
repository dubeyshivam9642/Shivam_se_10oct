#include<stdio.h>
void f1add(int n1,int n2)
{
	printf("\nAddition : %d + %d = %d",n1,n2,n1+n2);
}
void f2sub(int n1,int n2)
{
	printf("\nSubstraction : %d - %d = %d",n1,n2,n1-n2);
}
void f3mul(int n1,int n2)
{
	printf("\nMultiplication : %d * %d = %d",n1,n2,n1*n2);
}
void f4div(int n1,int n2)
{
	printf("\nDivision : %d / %d = %.2f",n1,n2,(float)n1/n2);
}

void main()
{
	int i,a,b,c;
	for(i=1;i>0;i++)
	{
	printf("\n\nWelcome to calculator\n");
	printf("*********************\n");
	printf("\nEnter Number 1 : ");
	scanf("%d",&a);
	printf("\nEnter Number 2 : ");
	scanf("%d",&b);
	printf("\nEnter the function you want to perform");
	printf("\n\n1. Addition\n2. Substraction\n3. Multiplication\n4. Division\n");
	printf("\nEnter number = ");
	scanf("%d",&c);
	switch(c)
	{
		case (1): f1add(a,b);
		break;
		case (2): f2sub(a,b);
		break;
		case (3): f3mul(a,b);
		break;
		case (4): f4div(a,b);
		break;
		default:printf("Try again wrong function");
		break;
	}
	}										
	
}