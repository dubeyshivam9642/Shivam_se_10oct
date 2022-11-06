#include<stdio.h>

void main()
{
	int n1,n2,n3;
	
	printf("\nEnter Number 1 ");
	scanf("%d",&n1);
	printf("\nEnter Number 2 ");
	scanf("%d",&n2);
	printf("\nEnter Number 3 ");
	scanf("%d",&n3);
	
	if(n1>n2)
	{
		if(n1>n3)
		{
			printf("\n%d is greater",n1);
		}
		else
		{
			
			printf("\n%d is greater",n3);
		}
	}
	else
	{
		if(n2>n1)
		{
			if(n2>n3)
			{
				printf("\n%d is greater",n2);
			}
			else
			{
				printf("\n%d is greater",n3);
			}
		}
	}
}