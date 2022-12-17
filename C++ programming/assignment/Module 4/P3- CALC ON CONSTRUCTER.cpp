#include<iostream>
using namespace std;

class calc{
	public:
		calc()
		{
			double a,b;
			cout<<"Enter number 1 : ";
			cin>>a;
			cout<<"\nEnter number 2 : ";
			cin>>b;
			int c;
			cout<<"\nPress 1 for Addition :";
			cout<<"\nPress 2 for Substraction :";
			cout<<"\nPress 3 for Multiplication :";
			cout<<"\nPress 4 for Division : ";
			cout<<"\nEnter your choice : ";	
			cin>>c;
			switch(c)
			{
				case (1) : cout<<"Addition : "<<(a+b);
				break;
				case (2) : cout<<"Substraction : "<<(a-b);
				break;
				case (3) : cout<<"Multiplication : "<<(a*b);
				break;
				case (4) : cout<<"Division : "<<((float)a/b);
			}
		}
};
int main()
{
	calc obj;
	return 0;
}