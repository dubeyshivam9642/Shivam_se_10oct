#include<stdio.h>
void main()
{
	int a[3][3],i,j;
	
	printf("You are entering the matrix\n");
	printf("Enter the values for the matrix\n\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("values at index[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nValues at index of matrix [%d] [%d] = [%d]\n",i,j,a[i][j]);
		}
	}
}