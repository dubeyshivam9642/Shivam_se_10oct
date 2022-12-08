#include<iostream>
using namespace std;

class side{
	protected:
		int l;
		public:
			void getval(int x)
			{
				l = x;
			}
};

class square : public side{
	public:
		int squ()
		{
			return l*l;
		}
};
class cube : public side{
	public:
		int cub()
		{
			return l*l*l;
		}
};
int main()
{
	square sq;
	sq.getval(5);
	cout<<"\nSquare of no is : "<<sq.squ();
	
	cube cu;
	cu.getval(5);
	cout<<"\nCube of no is : "<<cu.cub();
	return 0;
}