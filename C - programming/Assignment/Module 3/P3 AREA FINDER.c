#include<stdio.h>
void main()
{
	int a,b,c;//a is for program selection,b and c are for data inputs
	float d = 3.14;
	printf("Welcome to the Program\n");
	printf("Enter the no. function for which you have to find area\n");
	printf("\n1. Circle\n2. Rectangle\n3. Triangle\n");
	printf("\n4Enter no. = ");
	scanf("%d",&a);
	if(a==1)
	{
		printf("\nEnter the radius of circle = ");
		scanf("%d",&b);
		printf("\nArea of circle is [%.2f]",(b*b)*d);
	}
	else if(a==2)
	{
		printf("\nEnter the length of rectangle = ");
		scanf("%d",&b);	
		printf("\nEnter the breadth of rectangle = ");
		scanf("%d",&c);
		printf("\nArea of rectangle = %.2f",(float)b*c);
	}
	else if(a==3)
	{
		printf("\nEnter the base of triangle = ");
		scanf("%d",&b);
		printf("\nEnter the height of triangle = ");
		scanf("%d",&c);
		printf("\nArea of Triangle = %.2f",(b*c)*(float)0.5);
	}
	else
	{
		printf("Wrong function TRY AGAIN!!!!");
	}
	
}