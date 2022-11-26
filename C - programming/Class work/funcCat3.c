#include<stdio.h>

int add(int a1,int b1)
{
	
	return 	a1+b1;
}


void main()
{
	int a=4,b=7;
	printf("\nEnter A , B : ");
	scanf("%d%d",&a,&b);
	printf("%d",add(a,b));
	
}