#include<iostream>
using namespace std;

class calculator{
	public:
		
		void function(int a1,int a2,int a3,int a4,int a5)
		{
			cout<<"\nAddition : "<<(a1+a2+a3+a4+a5);
		}
		
		void function(double s1,double s2,double s3)
		{
			cout<<"\nSubstraction : "<<(s1-s2-s3);
		}
		int function(int m1,int m2,int m3,int m4)
		{
			return (m1*m2*m3*m4);
		}
		int function(float d1,float d2)
		{
			return ((float)d1/d2);
		}
};



int main()
{
	calculator obj;
	obj.function(5,6,3,65,8);
	obj.function(12,8,6);
	cout<<"\nMultiplication : "<<obj.function(10,20,30,40);
	cout<<"\nDivision : "<<obj.function(16,4);
	return 0;
}