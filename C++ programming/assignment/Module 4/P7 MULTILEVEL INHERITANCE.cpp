#include<iostream>
using namespace std;

class student{
	public:
		void st1()
		{
			cout<<"Name of student : Shivam dubey";
			cout<<"\nRoll number : 21";
		}
		void st2()
		{
			cout<<"\n\nName of student : Anjali Mishra";
			cout<<"\nRoll Number : 12";
		}
};
class test :public student{
	public:
			int s1eng=90,s1math = 95;
			int s2eng=95,s2math = 98;
		void ms1()
		{	
			cout<<"\nMarks of this student is as follows :";
			cout<<"\nEnglish = 90";
			cout<<"\nMaths   = 95";
		}
		void ms2()
		{	
			cout<<"\nMarks of this student is as follows :";
			cout<<"\nEnglish = 95";
			cout<<"\nMaths   = 98";
		}
};
class result:public test{
	public:
		void resultst1()
		{	int total1;
		 	total1 = s1eng+s2math;
			cout<<"\nTotal marks of this student : "<<total1;
		}
		void resultst2()
		{	int total2;
		 	total2=s2eng+s2math;
			cout<<"\nTotal marks of this student : "<<total2;
		}
};
int main()
{
	result obj;
	obj.st1();
	obj.ms1();
	obj.resultst1();
	obj.st2();
	obj.ms2();
	obj.resultst2();
	return  0;
}