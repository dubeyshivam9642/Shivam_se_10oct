#include<iostream>
using namespace std;

class numbers{
	public:
		int a,b = 2,c = 3;
};
class names{
	public:
		char n[20] = ("Shivam Dubey");
};
int main()
{
	numbers n;
	names s;
	cin>>n.a;
	cout<<s.n<<" "<<n.a;
}