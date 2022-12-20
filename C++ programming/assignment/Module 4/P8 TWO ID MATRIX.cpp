#include<iostream>
using namespace std;

class matrix{
	public:
		int i,a[5];
		
		void acceptmatrix()
		{
			cout<<"\nEnter the data for (1*5) matrix : \n";
			for(i=0;i<=4;i++)
			{
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
		matrix operator +(matrix x)
		{
			int mat[5];
			for(i=0;i<=4;i++)
			{
				mat[i]=a[i]+x.a[i];
			}
			
			cout<<"\nAddition of matrix : \n\n";
			for(i=0;i<=4;i++)
			{
				cout<<mat[i];
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
	m1+m2;
	return 0;
}