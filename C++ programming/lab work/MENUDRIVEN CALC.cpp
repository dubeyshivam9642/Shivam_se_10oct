#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int a,b,c;
	
	cout<<"press number for calculation you want to perform \n";
	cout<<"1. Addition\n2. Substraction\n3. Multiplication\n4. Division\n";
	cout<<"Enter choice : ";
	cin>>c;
	
	if(c<=4)
	{
		cout<<"\nEnter number 1 : ";
		cin>>a;
		cout<<"\nEnter number 2 : ";
		cin>>b;
		cout<<"\n";
		switch(c)
		{
			case (1):cout<<a<<" + "<<b<<" = "<<(a+b)<<endl;
			break;
			case (2):cout<<a<<" - "<<b<<" = "<<(a-b)<<endl;
			break;
			case (3):cout<<a<<" * "<<b<<" = "<<(a*b)<<endl;
			break;
			case (4):printf("%d / %d = %.2f",a,b,((float)a/b));
			break;
		}
	}
	else
	{
		cout<<"\nTry again wrong function!!!!";
	}
}