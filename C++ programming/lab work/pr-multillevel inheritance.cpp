#include<iostream>
using namespace std;

class level1{
	public:
		int a;
		void getvala()
		{
			cout<<"Enter value of A : ";
			cin>>a;
			
		}
		void showvala()
		{
			cout<<"\nA : "<<a;
		}
};
class level2 : public level1{
	public:
		int b;
		void getvalb()
		{
			cout<<"\nEnter value of B : ";
			cin>>b;
		}
		void showvalb()
		{
			cout<<"\nB : "<<b;
		}
};
class level3:public level2{
	public:
		int c;
		void getvalc()
		{
			cout<<"\nEnter value of c : ";
			cin>>c;
		}
		void showvalc()
		{
			cout<<"\nC : "<<c;
		}
};



int main()
{	
	level3 obj;
	obj.getvala();
	obj.getvalb();
	obj.getvalc();
	obj.showvala();
	obj.showvalb();
	obj.showvalc();
	return 0;
}