#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Simple Calculator\n");
	printf("Enter number 1 : ");
	scanf("%d",&a);
	printf("Enter number 2 : ");
	scanf("%d",&b);
	
	printf("\nEnter the number for the function\n");
	printf("1. Addition\n2. Substraction\n3. Multiplication\n4. Division\n5. Modulo\n");
	scanf("%d",&c);
	printf("\n");
	if(c==1)
	{
		printf("%d + %d = %.2f",a,b,(float)a+b);
	}
	else if(c==2)
	{
		printf("%d - %d = %.2f",a,b,(float)a-b);
	}
	else if(c==3)
	{
		printf("%d * %d = %.2f",a,b,(float)a*b);
	}
	else if(c==4)
	{
		printf("%d / %d = %.2f",a,b,(float)a/b);
	}
	else if(c==5)
	{
		printf("%d & %d = %d",a,b,b&&a);
	}
	else
	{
		printf("\nWrong function try again");
	}
	
}