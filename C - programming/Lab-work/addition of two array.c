#include<stdio.h>
void main()
{
	int a[3],b[3],i;
	
	printf("Insert Array 1 Values\n");
	printf("*********************\n");
	
	for(i=0;i<3;i++)
	{
		printf("Enter values at index[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nInsert Array 2 Values\n");
	printf("*********************\n");
	
	for(i=0;i<3;i++)
	{
		printf("Enter values at index[%d] = ",i);
		scanf("%d",&b[i]);
	}
	printf("\nArray 1 values\n");
	for(i=0;i<3;i++)
	{
		printf("index[%d] = %d\n",i,a[i]);
	}
	printf("\nArray 2 values\n");
	for(i=0;i<3;i++)
	{
		printf("index[%d] = %d\n",i,b[i]);
	}
	printf("\nAddition of Both Arrays\n");
	for(i=0;i<3;i++)
	{
		printf("%d + %d = %d\n",a[i],b[i],a[i]+b[i]);
	}
}