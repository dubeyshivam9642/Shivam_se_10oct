#include<stdio.h>

void main()
{
	int arr1[3][3];	
	int i,j;
	printf("\n\n----------Enter Matrix 1 Elements : ----------\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Value at Index [%d][%d] : ",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nValue at Index [%d][%d] : %d",i,j,arr1[i][j]);
		
		}
	}
	
	
	
}