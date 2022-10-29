#include<stdio.h>
void main()
{
	char name[20];
	int age;
	float salary;
	
	printf("Enter your name :");
	//scanf("%s", &name);
	gets(name);
	printf("Enter your age :");
	scanf("%d",&age);
	printf("Enter your salary :");
	scanf("%f",&salary);
	
	printf("\nName = %s\n",name);
	printf("Age  = %d\n",age);
	printf("Salary = %.5f\n",salary);
}