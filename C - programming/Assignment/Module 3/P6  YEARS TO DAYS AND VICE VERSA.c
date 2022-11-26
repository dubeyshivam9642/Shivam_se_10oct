#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter what you want to convert\n");
	printf("\n1. Years to Days\n2. Days to Years");
	printf("\nEnter your choice : ");
	scanf("%d",&a);
	if(a==1)
	{
		printf("\nEnter number of year : ");
		scanf("%d",&b);
		printf("\nDays in these years are = %d",b*365);	
	}
	else if(a==2)
	{
		printf("\nEnter number of days : ");
		scanf("%d",&b);
		printf("\nThese days comes in %.1f years",(float)b/365);
	}
	else
	{
	 	printf("\nTRY AGAIN");
	}
}