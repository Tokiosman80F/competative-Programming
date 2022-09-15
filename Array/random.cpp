#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int size)
{
	cout<<"Printing the Array Start"<<endl;
	for (int i = 0; i < size; ++i)
	{
		cout<<"printing the Array "<<arr[i]<<endl;

	}
	cout<<"printed Array End Here"<<endl;
}
int main()
{
	int first[10]={2,7,5};
	int size=5;
	printArray(first,size);
	// int n=5;
	// int value=10;
	// int arr[n];

	// std::fill_n(arr,n,value);

	// for (int i = 0; i < n; ++i)
	// {
	// 	/* code */
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;

	// int arr[15]={10,20};
	// for (int i = 0; i < 15; ++i)
	// {
	// 	/* code */
	// 	cout<<i+1<<"."<<arr[i]<<endl;
	// }

}