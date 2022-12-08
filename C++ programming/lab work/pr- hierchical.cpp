#include<iostream>
using namespace std;

class side{
	protected:
	int length;
		public:
			void getval(int x)
			{
				length = x;
			}
};

class square : public side{
	public:
		int sq()
		{
			return length*length;
		}
};
class cube:public side{
	public:
		int cu()
		{
			return length*length*length;
		}
};

int main()
{	
	square obj1;
	int a;
	cout<<"Enter number to find square and cube : ";
	cin>>a;
	obj1.getval(a);
	cout<<"Square of the number is : "<<obj1.sq();
	
	cube obj2;
	obj2.getval(a);
	cout<<"\nCube of the number is : "<<obj2.cu();
	
	return 0;
}