#include<iostream>
using namespace std;

class Swap{
	public:
			int n1,a,b;
		Swap(int a,int b)
		{
			this ->a = a;
			this ->b = b;	
		}
		friend void swapped(Swap&);
};
void swapped(Swap& obj)
{
	cout<<"\nBefore swapping \n a = "<<obj.a<<" b = "<<obj.b;
	obj.n1 = obj.a;
	obj.a = obj.b;
	obj.b = obj.n1;
	cout<<"\nAfter swapping \n a = "<<obj.a<<" b = "<<obj.b;
}

int main()
{
	Swap obj1(10,5);
	swapped(obj1);
	return 0;
}