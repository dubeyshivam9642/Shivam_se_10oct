#include<iostream>
using namespace std;


class detail{
	public:
		string name;
		
		void getname()
		{
			cout<<"Enter name : ";
			getline(cin,name);
		}
		void showname()
		{
			cout<<"Name = "<<name;
		}
};
int main()
{
	detail obj;
	obj.getname();
	obj.showname();
	return 0;
}