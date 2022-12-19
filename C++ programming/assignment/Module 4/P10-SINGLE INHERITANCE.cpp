#include<iostream>
using namespace std;

class cricketer{
	public:
		string name,category;
		void data()
		{
			cout<<"\nEnter name : ";
			cin>>name;
			fflush(stdin);
			cout<<"\nEnter category : ";
			cin>>category;
		}	
};
class batsman:public cricketer{
	public: 
		int r1,r2,r3,total,average;
		void performance()
		{
			cout<<"\nEnter the runs of last 3 matches played in this season : ";
			cout<<"\nMatch 1 : ";
			cin>>r1;
			cout<<"\nMatch 2 : ";
			cin>>r2;
			cout<<"\nMatch 3 : ";
			cin>>r3;
			total = r1+r2+r3;
			average = total/3;
		}
		
		void display()
		{
			cout<<"\n\nNAME = "<<name<<"\n\nCategory = "<<category;
			cout<<"\nTotal runs scored by him in this season : "<<total;
			cout<<"\nAverage run scored : "<<average;
		}
};
int main()
{
	batsman b1,b2;
	b1.data();
	b1.performance();
	b2.data();
	b2.performance();
	b1.display();
	b2.display();
	return 0;	
}