#include<stdio.h>

void add()
{
	int a=9,b=3;
	printf("\nAdd : %d",(a+b));	
}

void sub()
{
	int a=9,b=3;
	printf("\nSub : %d",(a-b));	
}

void mul()
{
	int a=9,b=3;
	printf("\nMul : %d",(a*b));	
}

void div()
{
	int a=9,b=3;
	printf("\nDiv : %d",((float)a/b));	
}



void main()
{
	int choice;
	printf("\n\nPress1. Add\nPress2.Sub\nPress3.Mul\nPress4.Div");
	printf("\nEnter your choice ?");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1: add();
				break;
		case 2: sub();
				break;
		case 3: mul();
				break;
		case 4: div();
				break;
		default: printf("\nInvalid Choice");
				break;
	}
	
	
}


















