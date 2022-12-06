#include<stdio.h>
void main()
{
	int a,b;
	
	printf("Enter Number 1 : ");
	scanf("%d",&a);
	printf("\nEnter Number 2 : ");
	scanf("%d",&b);
	
	printf("Addition = %d ",(a+b));
	printf("\nSubstraction = %d ",(a-b));
	printf("\nMultiplication = %d ",(a*b));
	printf("\nDivision = %.2f ",((float)a+b));
	
}