#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int a = 6,b = 9;
	
	cout<<"A = "<<a<<",B = "<<b;
	
	cout<<"\nAddition : "<<(a+b);
	cout<<"\nSubstraction : "<<(a-b);
	cout<<"\nMultiplication : "<<(a*b);
	printf("\nDivision : %.2f",((float)a/b));
	return 0;
}