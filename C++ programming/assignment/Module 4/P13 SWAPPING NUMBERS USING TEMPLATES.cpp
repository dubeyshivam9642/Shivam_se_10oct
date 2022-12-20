#include<iostream>
using namespace std;

template <class T>
int swap_number(T& a,T& b)
{
	T t;
	t=a;
	a=b;
	b=t;
	return 0;
}
int main()
{	
	int n1,n2;
	n1=12,n2=20;
	cout<<"Before swapping\nn1 = "<<n1<<" n2 = "<<n2;
	swap_number(n1, n2);
	cout<<"\nAfter swapping\nn1 = "<<n1<<" n2 = "<<n2;
	return 0;
}