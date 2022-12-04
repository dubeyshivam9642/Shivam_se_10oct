#include<iostream>
using namespace std;
class staticdemo{
	public:
		static int objcount;
		staticdemo()
		{
			cout<<"This is a constructer";
			objcount++;
		}
};
int staticdemo::objcount=0;

int main()
{
	staticdemo obj,obj1,obj2;
	cout<<"\nObject count : "<<obj.objcount;
	return 0;
}