#include<stdio.h>
void main()
{
	char name[10];
	int rn,s1,s2,s3,total;
	float per;
	
	printf("Enter your name\n");
	gets(name);
	printf("Enter your Rollno.\n");
	scanf("%d",&rn);
	printf("Enter physics mark\n");
	scanf("%d",&s1);
	printf("Enter chemistry marks\n");
	scanf("%d",&s2);
	printf("Enter maths marks\n");
	scanf("%d",&s3);
	total = s1+s2+s3;
	printf("\nResult\nName = %s\nRoll no. = %d",name,rn);
	printf
	(
	"\nPhysics = %d,\nChemistry = %d,\nMaths = %d,\nTotal marks = %d",s1,s2,s3,total
	);
	per=total/3;
	printf("\npercentage = %.2f",per);
	
	if(per>=85)
	{
		printf("\nYour grade is A+,Execellent");
	}
	else if(per>=70)
	{
		printf("\nYour grade is A,Keep it up");
	}
	else if(per>=55)
	{
		printf("\nYour grade is B,Practice a lot");
	}
	else
	{
		printf("You are FAIL!!!!.Try again next year");
	}
	
	
}