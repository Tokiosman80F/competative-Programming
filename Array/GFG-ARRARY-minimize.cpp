#include<bits/stdc++.h>
using namespace std;
int minValue(int a[],int b[],int n)
{
	int sum=0;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		sum=sum+(a[i]*b[(n-1)-i]);
	}
	return sum;
}
int main()
{
	int arr1[]={7,18,16,14};
	int arr2[]={16,7,13,10};
	int n=sizeof(arr1)/sizeof(arr1[0]);

	cout<<"the mini value"<<minValue(arr1,arr2,n);
}