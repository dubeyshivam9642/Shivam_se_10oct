#include<iostream>
using namespace std;

class data{
	public:
		void details()
		{
			cout<<"\n\nName of Account holder : Shivam Dubey";
			cout<<"\n\nAccount Number : 123456789 ";
			cout<<"\n\nType of Account : Savings ";
			cout<<"\n\nAccount Balance : RS 60000";
		}
		void transaction()
		{
			int amount = 60000,deposit,withdraw,a,total;
			cout<<"\n\nPress 1 for DEPOSIT MONEY";
			cout<<"\nPress 2 for WITHDRAW MONEY ";
			cout<<"\nEnter your choice : ";
			cin>>a;
			switch(a)
			{
				case (1):
					cout<<"\nEnter the amount for deposit :RS ";
					cin>>deposit;
					cout<<"\nSuccessfully deposited !!!";
					cout<<"\nHave a great day !!!!";
					total=amount + deposit;
					cout<<"\nCurrent account balance :RS  "<<total;
					break;
				case(2):
					cout<<"\nEnter the amount for Withdraw :RS ";
					cin>>withdraw;
					cout<<"\nSuccessfully withdrawed !!!";
					cout<<"\nHave a great day !!!!";
					total=amount - withdraw;
					cout<<"\nCurrent account balance :RS  "<<total;
			}
			
		}
		
			
};
int main()
{
	data obj;
	cout<<"\nWELCOME TO BANK\n";
	obj.details();
	obj.transaction();
	return 0 ;
}