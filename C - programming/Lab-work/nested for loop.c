#include<stdio.h>
void main()
{
	int i,j;
	
	for(i=2;i<=7;i++)
	{
		printf("\nTable of %d",i);
		printf("\n-----------");
		
		for(j=1;j<=10;j++)
		{
			printf("%d x %d = %d\n",i,j,i*j);
		}
		printf("\n");
	}
}