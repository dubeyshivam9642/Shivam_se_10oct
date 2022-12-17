#include<iostream>
using namespace std;

class person{
	public:
		void st1()
		{
			cout<<"\nStudent Name : Shivam Dubey";
			cout<<"\nAge : 21";
		}
		void st2()
		{
			cout<<"\nStudent Name : Shivani Dubey";
			cout<<"\nAge : 23";
		}
		void teacher1()
		{
			cout<<"\nTeacher Name : Rakesh Kharva";
		}
		void teacher2()
		{
			cout<<"\nTeacher Name : Devangini Dubey";
		}
		
};
class Student : public person{
	public:
		int s1,s2,s3,s4,s5,total,per;
		void Marks()
		{
			cout<<"\nEnter English Marks : ";
			cin>>s1;
			cout<<"\nEnter Maths Marks : ";
			cin>>s2;
			cout<<"\nEnter Science Marks : ";
			cin>>s3;
			cout<<"\nEnter Social Science Marks : ";
			cin>>s4;
			cout<<"\nEnter Sanskrit Marks : ";
			cin>>s5;
			total=s1+s2+s3+s4+s5;
			cout<<"\n\nTotal Marks :"<<total;
			per=total/5;
			cout<<"\n\nPercentage = "<<(float)per;
		}
};
class Teacher:public Student{
	public:
		int s;
		void salary()
		{
			cout<<"\nAssign the amount of salary for this faculty :RS  ";
			cin>>s;
			cout<<"\n\nSALARY ASSIGNED SUCCESSFULLY!!!!";
		}
};


int main()
{
	Teacher obj;
	int choice;
	cout<<"\nWelcome to School Portal";
	cout<<"\nPress 1 to go to Student Portal ";
	cout<<"\nPress 2 to go to Teacher Portal ";
	cout<<"\nEnter Choice : ";
	cin>>choice;
	switch(choice)
	{
		case(1):
			obj.st1();
			obj.Marks();
			obj.st2();
			obj.Marks();
			break;
		case(2):
			obj.teacher1();
			obj.salary();
			obj.teacher2();
			obj.salary();
			break;
		default:
			cout<<"\nYou have Entered the Wrong Choice Try Again !!";
	}
	
	
	return 0;
}