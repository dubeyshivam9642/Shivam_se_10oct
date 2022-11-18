#include<stdio.h>
void main()
{
	int i,arr[5],arr2[5];
	
	printf("\nAccepting array 1 values\n");
	
	for(i=0;i<5;i++)
	{
		printf("Enter the value at index[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("The value at index [%d] is = %d\n",i,arr[i]);
	}
	
	printf("Accepting array 2 values\n");
	
	for(i=0;i<5;i++)
	{
		printf("Enter the value of index[%d]",i);
		scanf("%d",&arr2[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("The value at index [%d] is = %d\n",i,arr2[i]);
	}
}