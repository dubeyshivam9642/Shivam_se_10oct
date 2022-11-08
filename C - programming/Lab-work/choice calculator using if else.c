#include<stdio.h>
void main()
{
	int a,b,c;
	
	printf("Welcome to if else calculator");
	
	printf("\nEnter numbers\n");
	scanf(" %d\n %d",&a,&b);
	printf("\nNumber 1 = %d\nNumber 2 = %d\n",a,b);
	printf("\nPress 1 for Addition\nPress 2 for Substraction");
	printf("\nPress 3 for Multiplication\nPress 4 for Division\n");
	scanf("%d",&c);
	
	if(c==1)
	{
		printf("%d + %d = %d",a,b,(a+b));
	}
	else if(c==2)
	{
		printf("%d - %d = %d",a,b,(a-b));
	}
	else if(c==3)
	{
	printf("%d * %d = %d",a,b,(a*b));
	}
	else if(c==4)
	{
		printf("%d / %d = %.2f",a,b,((float)a/b));
	}
	else
	{
		printf("Invalid!!!");
		
	}
}