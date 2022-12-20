#include<iostream>
using namespace std;

class student{
	public:
		string name;
		void getname()
		{
			cout<<"Enter name : ";
			cin>>name;
		}
};
class extramarks{
	public:
		int sp;
		extramarks()
		{
			sp = 50;
		}
};
class result: public student,public extramarks{
	public:
		int s1,s2,s3,total;
		float per;
		result()
		{
			s1=54;
			s2=56;
			s3=65;
			total=s1+s2+s3+sp;
			per=(float)total/4;
		}
		void display()
		{
			cout<<"\nName : "<<name;
			cout<<"\nTotal marks : "<<total;
			cout<<"\nPercentage : "<<per;
		}
};

int main()
{
	result obj;
	obj.getname();
	obj.display();
	return 0;
}