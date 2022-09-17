#include<bits/stdc++.h>
using namespace std;
long long maxMin(long long a[],int n)
{
	long long max=INT_MIN;
	long long min=INT_MAX;
	for (int i = 0; i < n; ++i)
	{	
		if(max<a[i])
			max=a[i];

		if(min>a[i])
		min=a[i];
	}
    pair <int,int> ans;

    ans.first=min;

    ans.second=max;

    return ans;
}
int main()
{
	long long a[]={3,2,1,56,10000,167};
	int size=sizeof(a)/sizeof(a[0]);
	cout<<"the max and min "<<maxMin(a,size);
}