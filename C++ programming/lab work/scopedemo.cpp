  #include<iostream>
  using namespace std;
  
  class scopedemo{
  	public:
  		void func();
  };
  
  void scopedemo::func()
  {
  	cout<<"This is function from scopedemo class";
  }
  int main()
  {
  	scopedemo sd;
  	sd.func();
  	return 0;
  }