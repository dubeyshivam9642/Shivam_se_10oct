#include<stdio.h>
void main()
{
	int i , a[5];
	for(i=1;i<=5;i++)
	{
		printf(" Enter no.[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=1;i<=5;i++)
	{
		printf("%d\t",a[i]);
	}
}