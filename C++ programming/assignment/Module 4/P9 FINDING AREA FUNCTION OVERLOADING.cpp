#include<iostream>
using namespace std;
class data{
	public:
		void area()
		{
			int l,b;
			cout<<"\nEnter the data of rectangle to find the area ";
			cout<<"\nlength = ";
			cin>>l;
			cout<<"\nBreadth = ";
			cin>>b;
			cout<<"\nArea of rectangle = "<<(l*b);
		}
		int area(float half,int base,int alt)
		{
			return (half*base*alt);
		}
		int area(float pi,float radius)
		{
			return (pi*radius*radius);
		}
};
int main()
{
	data obj;
	obj.area();
	int base,alt;
	float radius;
	cout<<"\n\nEnter the details of triangle ";
	cout<<"\n\nBase : ";
	cin>>base;
	cout<<"\nAltitide : ";
	cin>>alt;
	cout<<"\nArea of Triangle = "<<obj.area(0.5,base,alt);
	cout<<"\n\nEnter the radius of circle : ";
	cin>>radius;
	cout<<"\nArea of Circle = "<<obj.area(3.14,radius);
	
	
	return 0;
}