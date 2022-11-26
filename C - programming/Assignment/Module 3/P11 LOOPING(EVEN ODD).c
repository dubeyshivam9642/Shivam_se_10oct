#include<stdio.h>
void main()
{
	int n,a[10];//n is for looping variable
	int e = 0;// even
	int o = 0;//odd
	int se = 0,so = 0;//se = sum of even, so = sum of odd
	
	for(n=1;n<=10;n++)//for taking inputs
	{
		printf("Enter number[%d] : ",n);
		scanf("%d",&a[n]);
	}
	printf("\nEven Numbers are :\n");
	for(n=1;n<=10;n++)//for displaying even numbers
	{
		if(a[n]%2==0)
		{
			printf("%d\t",a[n]);
		}
	}
	for(n=1;n<=10;n++)//for summation of even numbers
	{
		if(a[n]%2==0)
		{
			e++;
			se = se + a[n];
		}
	}
	printf("\nTotal = %d",e);
	printf("\nSum of even numbers are = %d",se);
	
	printf("\n\nOdd Numbers are :\n");
	for(n=1;n<=10;n++)//for displaying odd numbers
	{
		if(a[n]%3==0)
		{
			printf("%d\t",a[n]);
		}
	}
	for(n=1;n<=10;n++)//for summation of odd number
	{
		if(a[n]%3==0)
		{
			o++;
			so = so + a[n];
		}
	}
	printf("\nTotal = %d",o);
	printf("\nSum of odd numbers are = %d",so);
}
		