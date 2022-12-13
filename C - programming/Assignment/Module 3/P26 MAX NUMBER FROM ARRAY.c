#include<stdio.h>

void main()
{
	int a[5],i,max=0;

	
	for(i=1;i<=5;i++)
	{
		printf("\nEnter the values of Number %d : ",i);
		scanf("%d",&a[i]);
	}
	for(i=1;i<=5;i++)
	{
		if(a[i]>max)
		{
			max = a[i];
		}
	}
	printf("\nMaximum number is : %d ",max);
}