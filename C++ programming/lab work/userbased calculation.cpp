#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int a,b;
	
	cout<<"Enter no A : ";
	cin>>a;
	cout<<"Enter no B : ";
	cin>>b;
	cout<<"\nAddition of "<<a<<" and "<<b<<" is : "<<(a+b)<<endl;
	cout<<"Substraction of "<<b<<" and "<<b<<" is : "<<(a-b)<<endl;
	cout<<"Multiplication of "<<b<<" and "<<b<<" is : "<<(a*b)<<endl;
	printf("Division of %d and %d is : %.2f",a,b,((float)a/b));
	return 0;
}