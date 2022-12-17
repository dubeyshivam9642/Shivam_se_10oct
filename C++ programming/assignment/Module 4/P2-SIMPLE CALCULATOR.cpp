#include<iostream>
#include<stdio.h>
using namespace std;

class calc{
	public:
		
		int add(int x,int y)
		{
			return x+y;
		}
		int sub(int x,int y)
		{
			return x-y;
		}
		int mul(int x,int y)
		{
			return x*y;
		}
		int div(int x, int y)
		{
			return x/y;
		}
}; 

int main()
{	
	calc obj1;
	int a,b;
	cout<<"Welcome to Calculator";
	cout<<"\nENTER NUMBER 1 : ";
	cin>>a;
	cout<<"\nENTER NUMBER 2 : ";
	cin>>b;
	cout<<"\nAddition : "<<obj1.add(a,b);
	cout<<"\nSubstraction : "<<obj1.sub(a,b);
	cout<<"\nMultiplication : "<<obj1.mul(a,b);
	printf("\nDivision : %.2f",((float)a/b));
	
	
	return 0;
}