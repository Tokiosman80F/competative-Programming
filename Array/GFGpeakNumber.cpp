#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=10, a[]={1,2,3,4,5,6,7,8,9,10}, end=n-1, start=n-2;
	while(!end==0)
	{
		swap(a[start],a[end]);
		end--;
		start--;

}

	for (int i = 0; i < n; i++)
	{
	
		cout<<a[i]<<" ";
	}
}