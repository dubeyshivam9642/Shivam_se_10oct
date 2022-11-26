#include<stdio.h>
void main()
{
	int p,t;
	float r;
	
	printf("Simple interest calculator\n\n");
	printf("Enter Principal Amount : ");
	scanf("%d",&p);
	printf("\nEnter the Rate of interest : ");
	scanf("%f",&r);
	printf("\nEnter the duration in years : ");
	scanf("%d",&t);
	
	printf("\nYour interest amount is : %.2f",p*(1+(r/100)*t));
	
}