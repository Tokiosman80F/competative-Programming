#include<bits/stdc++.h>
using namespace std;
int getMax(int num[],int n )
{
	int maxi=INT_MIN;
	for (int i = 0; i < n; ++i)
	{

		maxi=max(maxi,num[i]);
		
	}
	return maxi;
}
int getMin(int num[],int n)
{
	int mini=INT_MAX;
	for (int i = 0; i < n; ++i)
	{
		// if(num[i]<min)
		// {
		// 	min=num[i];
		// }
		mini=min(mini,num[i]);
	}
	return mini;
}
int main()
{
	int size;
	cin>>size;
	int num[100];
	//taking input
	for (int i = 0; i < size; ++i)
	 {
	 	cin>>num[i];
	 } 

	 cout<<"Maximum value =>"<<getMax(num,size);

	 	cout<<endl;

	 cout<<"Minumum value =>"<<getMin(num,size);
}