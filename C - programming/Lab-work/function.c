#include<stdio.h>

void func1()
{
	printf("This is for function 1\n");
}
void func2()
{
	printf("This is for function 2\n");
}
void main()
{
	func2();
	func1();
}