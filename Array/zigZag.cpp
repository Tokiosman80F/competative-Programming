#include<bits/stdc++.h>
using namespace std;
void zigZag(int arr[],int n){
	for (int i = 0; i < n-1; ++i)
	{
		if(i%2==0 && arr[i]>arr[i+1])
		{
			swap(arr[i],arr[i+1]);
		}
		else if (i%2==1 && arr[i]<arr[i+1])
		{
			/* code */
			swap(arr[i],arr[i+1]);
		}
	}
	return;
	}
int main()
{
	int arr[]={4,3,7,8,6,2,1};
	int size=sizeof(arr)/sizeof(arr[0]);
	zigZag(arr,size);
	for (int i = 0; i < size; ++i)
	{
		cout<<arr[i]<<" ";
	}
}