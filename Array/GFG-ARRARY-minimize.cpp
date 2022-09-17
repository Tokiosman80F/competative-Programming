#include<bits/stdc++.h>
using namespace std;
long long int minValue(int a[],int b[],int n)
{
	long long int sum=0;
	sort(a,a+n,greater<int>());
	sort(b,b+n);

	for (int i = 0; i < n; ++i)
	{
		/* code */
		sum+=(a[i]*b[i]);
	}
	return sum;

}
int main()
{
	int arr1[]={6,1,9,5,4};
	int arr2[]={3,4,8,2,4};
	int n=sizeof(arr1)/sizeof(arr1[0]);

	cout<<"the mini value "<<minValue(arr1,arr2,n);
}