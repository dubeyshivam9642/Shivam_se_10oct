#include<iostream>
#include<time.h>
using namespace std;

class welcomescreen{
	public:
		int choice;
		int pin=12345;
		int ep;
		int i;
		
		welcomescreen()
		{
			time_t t;
		 	time(&t);
			cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO ATM \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
			cout<<"\n        --------------         "; 
			cout<<"\n\nCurrent date : "<<ctime(&t);
			cout<<"\n        --------------         ";
			cout<<"\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
			cout<<"\nPress 1 and then Press Enter to Access Your Account Via Pin Number";
			cout<<"\n                             or                                 ";
			cout<<"\nPress 0 And Press Enter To Get Help";
			cout<<"\n\nPress Button : ";
			cin>>choice;
			switch (choice)
			{
				case(1): 
					cout<<"\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ATM ACCOUNT ACCESS \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
					cout<<"\n\nEnter Your Account Pin Number ! [ONlY ONE ATTEMPT IS ALLOWED]";
				cout<<"\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n";
					cin>>ep;
					break;
				case(0):
					cout<<"\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ATM ACCOUNT STATUS \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
					cout<<"\nYou must have the correct pin number to access this account.";
					cout<<"\nSee your bank representative for assistance during bank opening hours";
					cout<<"\nThanks for, your choice today";
					break;
			}
			
			
			if(ep==pin)
			{
				for(i=0;i>=0;i++)
				{
				
				cout<<"\n\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ATM MENU SCREEN \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
				cout<<"\nEnter [1] to deposit cash";
				cout<<"\nEnter [2] to Withdraw cash";
				cout<<"\nEnter [3] for balance inquiry";
				cout<<"\nEnter [0] to exit ATM";
				int access;
				cout<<"\n\nPLEASE ENTER A SELECTION AND PRESS RETURN KEY : ";
				cin>>access;
				int balance = 20000;
				int deposit;
				int withdraw;
				int debited;
				switch(access)
				{
					case(1):
						cout<<"\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ATM ACCOUNT DEPOSIT SYSTEM \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
						cout<<"\nThe names of the Account Holders is : Shivam dubey";
						cout<<"\nThe account holder address is : Ahmedabad";
						cout<<"\nAccount number is : 65678";
						cout<<"\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
						cout<<"\n\nPresent available balance  : RS "<<balance;
						cout<<"\n\nEnter the amount to be deposited : ";
						cin>>deposit;
						int total;
						total = balance + deposit;
						cout<<"\nYour new available balance amount is RS "<<total;
						cout<<"\n\n             THANK YOU                  ";
						cout<<"\n\nPRESS ANY KEY TO RETURN TO THE MAIN MENU";
						break;
					case(2):
						cout<<"\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ATM WITHDRAWAL SYSTEM \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
						cout<<"\nThe names of the Account Holders is : Shivam dubey";
						cout<<"\nThe account holder address is : Ahmedabad";
						cout<<"\nAccount number is : 65678";
						cout<<"\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
						cout<<"\n\nPresent available balance  : RS "<<balance;
						cout<<"\nEnter amount of withdrawal : ";
						cin>>withdraw;
						if (withdraw > balance)
						{
							cout<<"Insufficient balance in your account \n Sorry!!!";
						}
						else
						{
							cout<<"\n\nWithdrawal is Successfull";
							debited=balance-withdraw;
							cout<<"\n\nAvailable balance is : RS "<<debited;
						}
						cout<<"\n\nPRESS ANY KEY TO RETURN TO THE MAIN MENU";
						break;
					case(3):
						cout<<"\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ATM BALANCE INQUIRY SYSTEM \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
						cout<<"\nThe names of the Account Holders is : Shivam dubey";
						cout<<"\nThe account holder address is : Ahmedabad";
						cout<<"\nAccount number is : 65678";
						cout<<"\nOpening Balance was : RS 60000";
						cout<<"\n\nPresent available balance  : RS "<<balance;
						cout<<"\n\nPRESS ANY KEY TO RETURN TO THE MAIN MENU";
						break;
					case(0):
						cout<<"\n Thanks for visiting the ATM\n Have a great day!!!";
						exit(0);
						break;
				}
			}
			
			}
		
			else
			{
				cout<<"\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 THANK YOU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
				cout<<"\nYou have made your attempt which failed !! No more attempts allowed!! Sorry!!";
			}
		}
};

int main()
{
	welcomescreen obj1;
	return 0;
}