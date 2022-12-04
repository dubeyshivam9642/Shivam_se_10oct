#include<iostream>
using namespace std;

class dictionary{
	public:
		static int objectcount;
		string word;
		string meaning;
		void apple();
		void cabbage();
		void milk();
		
};
int dictionary::objectcount = 0;
void dictionary::apple()
{
	cout<<"\nApple is a fruit";
	objectcount++;
}
void dictionary::cabbage()
{
	cout<<"\nCabbage is a vegetable";
}
void dictionary::milk()
{
	cout<<"\nMilk is a drink";
}
int main()
{
	dictionary food,food1;
	food.apple();
	food.cabbage();
	food.milk();
	cout<<"\nObject count = "<<food.objectcount;
	return 0;
}