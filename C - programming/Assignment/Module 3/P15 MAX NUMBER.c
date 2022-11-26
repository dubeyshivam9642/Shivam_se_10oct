#include<stdio.h>
void main()
{
	int n1,n2,n3,n4;
	printf("Enter only four numbers to find the maximum number:\n");
	scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
	
	if(n1>n2 && n2>n3 && n3>n4)
	{
		printf("%d is bigger",n1);
	}
	if(n2>n1&& n2>n3 && n3>n4)
	{
		printf("%d is bigger",n2);
	}
	if(n3>n1 && n3>n2 && n3>n4)
	{
		printf("%d is bigger",n3);
	}
	else
	{
		printf("%d is bigger",n4);
	}
}