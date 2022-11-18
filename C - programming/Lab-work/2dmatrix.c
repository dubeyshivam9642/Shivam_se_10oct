#include<stdio.h>
void main()
{
	int arr[3][3],i,j;
	
	printf("YOU ARE ABOUT TO ENTER THE MATRIX\n");
	printf("ENTER THE VALUES OF MATRIX\n\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("Enter the values for index [%d][%d]= ",i,j);
		scanf("%d",&arr[i][j]);
		}
	}
	printf("\nTHESE ARE THE VALUES OF MATRIX\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("[%d]\t",arr[i][j]);
		}
		printf("\n");
	}
}