#include<iostream>
using namespace std;
class num{
	public:
		int x,y;
		void input()
		{
			cout<<"Enter Number 1 : ";
			cin>>x;
			cout<<"\nEnter Number 2 : ";
			cin>>y;
		}
		friend void find(num t);
};
void find(num t){
	if(t.x > t.y)
	{
		cout<<"\nNumber 1 is maximum number";
	}
	else
	{
		cout<<"\nNumber 2 is maximum number";
	}
}
int main()
{
	num obj;
	obj.input();
	find(obj);
	return 0;
}