#include<stdio.h>

/*
	Function : It is a piece of code, which does a specific task.
	
	There are 2 types of Functions.
	
	1)Predefined functions.  printf(),scanf()
	2)Userdefined functions. A function which is created by a user.
	
	syntax :   <data-type> func_name()
				{
					statement;
				}
				
	Categories of Functions. : There are 3 categories 
	
	1) with no data-type and with no arguments. 
		
		e.g void f1()
			{
				statement;
			}
	
	2) with no datatype and with arguments.
	
		e.g void f1(int a)
			{
				statement
			}
			
	3) with data-type and with arguments.
	
		e.g int f1(int a)
			{
				statement
				return ;
			}
	
	
*/

void func1()     //Function Creation
{
	printf("\nThis is Function1");
}

void func2()     //Function Creation
{
	printf("\nThis is Function2");
}

void func3()     //Function Creation
{
	func2();
	printf("\nThis is Function3");
}


void main()
{
	func2();
	func1(); //Function Calling.

	func3();	
}