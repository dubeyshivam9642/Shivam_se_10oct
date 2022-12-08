#include<iostream>
using namespace std;

class base{
	public:
		int a;
		void getvala()
		{
			cout<<"Enter number A : ";
			cin>>a;
		}
		void showvala()
		{
			cout<<"\nA : "<<a;
		}
		
};
class derived : public base{
	public:
		int b;
		void getvalb()
		{
			cout<<"\nEnter number B : ";
			cin>>b;
		}
		void showvalb()
		{
			cout<<"\nB : "<<b;
		}
};
int main()
{
	derived obj;
	obj.getvala();
	obj.getvalb();
	obj.showvala();
	obj.showvalb();
	return 0;
}