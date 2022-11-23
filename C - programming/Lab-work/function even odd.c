#include<stdio.h>

void evenodd( int b)
{
	if(b%2==0)
	{
		printf("This no. is even");
	}
	else
	{
		printf("This no. is odd");
	}
}
void main()
{
	int a;
	printf("Enter the no : ");
	scanf("%d",&a);
	evenodd(a);
}