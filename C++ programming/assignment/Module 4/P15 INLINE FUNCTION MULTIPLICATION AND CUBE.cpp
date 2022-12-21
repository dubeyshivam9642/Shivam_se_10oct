#include<iostream>
using namespace std;

inline int mul(int x,int y,int z)
{
	return x*y*z;
}
inline int cube(int c)
{
	return c*c*c;
}

int main()
{
	int a,b,c,d;
	cout<<"\nEnter Number 1 : ";
	cin>>a;
	cout<<"\nEnter NUmber 2 : ";
	cin>>b;
	cout<<"\nEnter NUmber 3 : ";
	cin>>c;
	cout<<"\nMultiplication of these numbers are : "<<mul(a,b,c);
	cout<<"\nEnter the number for which you have to find cube : ";
	cin>>d;
	cout<<"\nThe cube of this number is : "<<cube(d);
	return 0;
}