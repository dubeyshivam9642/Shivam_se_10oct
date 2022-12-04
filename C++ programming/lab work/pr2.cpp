#include<iostream>
using namespace std;

class rect{
	public:
		double length,breadth,height;
		
		rect()
		{
			cout<<"volume of Rectangle";
			length = 15;
			breadth =  12;
			height  = 6;
		}
		void volume()
		{
			cout<<"\n Volume is "<<(length*breadth*height);
		}
};


int main()
{
	rect obj;
	obj.volume();
	return 0;
	
}