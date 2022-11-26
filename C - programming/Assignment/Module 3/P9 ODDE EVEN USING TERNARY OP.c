#include<stdio.h>
void main()
{
	int a;
	printf("Enter no : ");
	scanf("%d",&a);
	
	(a % 2 ==0) ? printf("No. is even") : printf("No. is odd");
}