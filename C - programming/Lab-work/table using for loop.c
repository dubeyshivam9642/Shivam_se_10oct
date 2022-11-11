#include<stdio.h>
void main()
{
	int i,a;
	printf("Enter the value : ");
	scanf("%d",&a);
	
	for(i=1;i<=10;i++)
	{
		printf("\n%d x %d = %d",a,i,(a*i));
	}
}