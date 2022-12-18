#include<iostream>
using namespace std;

class matrix{
	public:
		int i,a[4];
		
		void acceptmatrix()
		{
			cout<<"\nEnter the data for (1*5) matrix : \n";
			for(i=0;i<=4;i++)
			{
				//cout<<"";
				cin>>a[i];
			}
		}
		void displaymatrix()
		{
			for(i=0;i<=4;i++)
			{
				cout<<"\t"<<a[i];
			}
		}
		
};
int main()
{
	matrix m1,m2;
	cout<<"\nMatrix 1 ";
	m1.acceptmatrix();
	cout<<"\nMatrix 2 ";
	m2.acceptmatrix();
	cout<<"\nMatrix 1 = ";
	m1.displaymatrix();
	cout<<"\nMatrix 2 = ";
	m2.displaymatrix();
	return 0;
}