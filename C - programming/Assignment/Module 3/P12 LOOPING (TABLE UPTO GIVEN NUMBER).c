#include<stdio.h>
void main()
{
	int i,j,a;
	printf("Enter no. to which you want the table : ");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("%d * %d = %d\n",i,j,i*j);	
		}
		printf("\n");
	}
}