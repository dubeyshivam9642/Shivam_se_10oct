#include<stdio.h>
void main()
{
	int a[3][3],b[3][3],i,j;
	
	printf("Enter the values for the matrix 1\n\n");
	
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
			printf("Values at index of matrix are [%d] [%d] = [%d]\n",i,j,a[i][j]);
		}
		printf("\n");
	}
	printf("\n\nEnter the values for the matrix 2\n\n");
	for(i=0;i<3;i++)
		{
		for(j=0;j<3;j++)
		{
			printf("values at index[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Values at index of matrix are [%d] [%d] = [%d]\n",i,j,b[i][j]);
		}
		printf("\n");
	}
	printf("\nAddition of both matrix are : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d \t",(a[i][j]+b[i][j]));	
		}
		printf("\n");	
	}
	printf("\nSubstraction of both matrix are : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d \t",(a[i][j]-b[i][j]));	
		}
		printf("\n");	
	}
	printf("\nMultiplication of both matrix are : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d \t",(a[i][j]*b[i][j]));	
		}
		printf("\n");	
	}
}