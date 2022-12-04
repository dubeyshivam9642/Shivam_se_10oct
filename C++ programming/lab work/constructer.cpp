#include<iostream>
using namespace std;

class rect{
	public:
		double l,w,h;
		rect()
		{
			cout<<"This is a default constructer";
			l=10;
			w=5;
			h=60;
			cout<<"\nvolume of rectangle : "<<(l*w*h);
		}
		rect(double l,double w,double h)
		{
			cout<<"\n\nThis is parameterized constructer";
			cout<<"\nVolume of rectangle :  "<<(l*w*h);	
		}
		void functionrect()
		{
			cout<<"\n\nThis is a normal function";
			cout<<"\nENTER LENGTH : ";
			cin>>l;
			cout<<"\nENTER WIDTH : ";
			cin>>w;
			cout<<"\nENTER HEIGHT : ";
			cin>>h;
			cout<<"\nVolume of rectangle : "<<(l*w*h);
		}
};
int main()
{
	rect volume;
	rect volume2(56,40,21);
	rect func;
	func.functionrect();
	return 0;
}