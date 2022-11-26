#include<stdio.h>
void main()
{
	int i,a;
	
	printf("Enter the number from which you want to start reverse counting : ");
	scanf("%d",&a);
	
	for(i=a;i>=1;i--)
	{
		printf("%d\n",i);
	}
}