#include<iostream>
#include<string.h>
using namespace std;

class concate{
	public:
		char s1[10],s2[10];
		
		concate(char str1[],char str2[])
		{
			strcpy(this->s1,str1);
			strcpy(this->s2,str2);
		}
		void operator-()
		{
			cout<<"\nConcatenated string : "<<strcat(s1,s2);
		}
};
int main()
{
	char str1[10];
	char str2[10];
	cout<<"\nEnter string 1 = ";
	cin>>str1;
	cout<<"\nEnter string 2 = ";
	cin>>str2; 
	concate obj(str1,str2);
	-obj;
	return 0;
}