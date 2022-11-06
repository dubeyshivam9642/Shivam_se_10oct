#include<stdio.h>
void main()
{
	int a,b ;
	
	printf("Enter no1\n");
	scanf("%d",&a);
	printf("Enter no2\n");
	scanf("%d",&b);
	
	printf("\nNo1 = %d,No2 = %d\n",a,b);
	
	if(a>b)
	{
		printf("\nNo1 is bigger");
	}
	else
	{
		printf("\nNo2 is bigger");
	}
}