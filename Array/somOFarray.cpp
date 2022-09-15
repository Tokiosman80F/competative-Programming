#include<bits/stdc++.h>
using namespace std;

int getSum(int num[],int n)
{
	
	int sum=0;

	for (int i = 0; i < n; ++i)
	{
		// cout<<num[i]<<endl;
		sum=sum+num[i];
		// cout<<"The sum of arr =>"<<sum<<endl;
	}
	// cout<<"total sum=>"<<sum<<endl;

	return sum;
}
int main()
{
	int size,arr[100];
	cin>>size;
	for (int i = 0; i < size; ++i)
	{
		cin>>arr[i];
	}



	cout<<"the sum of array => "<<getSum(arr,size);

}