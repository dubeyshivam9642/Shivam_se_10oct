#include<iostream>
using namespace std;
#define N 10

template <class T>
void sort(T arr[],int size)
{	
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				T temp;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
}
int main()
{
	int array[N],i;
	cout<<"\nEnter array elements : "<<endl;
	for(i=0;i<N;i++)
	{
		cin>>array[i];
	}
	sort(array,N);
	cout<<"\nSorted Array : ";
	for(i=0;i<N;i++)
	{
		cout<<array[i]<<", ";
	}
	return 0;
}