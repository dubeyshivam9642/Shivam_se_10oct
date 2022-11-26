#include<stdio.h>
void main()
{
	int i,a,f=1;
	printf("Enter the number for which you have to find factorial : ");
	scanf("%d",&a);
	
	for(i=a;i>=1;i--)
	{
		f=f*i;
	}
		printf("Factorial of %d = %d",a,f);
}