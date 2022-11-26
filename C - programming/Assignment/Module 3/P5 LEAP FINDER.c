#include<stdio.h>
void main()
{
	int y;
	printf("Program to find Leap Year\n");
	printf("Enter the year : ");
	scanf("%d",&y);
	if(y % 4 ==0)
	{
		printf("\nYes this is a leap year!!!");
	}
	else
	{
		printf("\nThis is not a leap year");
	}
}