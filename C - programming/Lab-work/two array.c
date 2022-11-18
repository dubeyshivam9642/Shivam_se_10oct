#include<stdio.h>
void main()
{
	int a[5],b[5],i;
	
		printf("Accepting array 1 values\n");
	for(i=0;i<5;i++)//For accepting array 1 values
	{
		printf("Enter values of index[%d] = ",i);
		scanf("%d",&a[i]);
	}
		printf("Accepting array 2 values\n");
	for(i=0;i<5;i++)//For accepting array 2 values
	{
		printf("Enter values of index[%d] = ",i);
		scanf("%d",&b[i]);
	}
	printf("\nDisplaying array 1 values\n");
	for(i=0;i<5;i++)
	{
		printf("Values of array 1 at index[%d] = %d\n",i,a[i]);
	}
	printf("\nDisplaying array2 values\n");
	for(i=0;i<5;i++)
	{
		printf("Values of array 2 at index[%d] = %d\n",i,b[i]);
	}
	
}