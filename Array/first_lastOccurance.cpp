#include<bits/stdc++.h>
using namespace std;

int firstOcc(int arr[],int n,int key)
{
	int s=0,e=n-1,m=s+(e-s)/2;
	int ans=-1;
	while(s<=e)
	{
		if(arr[m]==key)
		{
			ans=m;
			e=m-1;
		}
		else if(arr[m]<key)
		{
			s=m+1;
		}
		else{
			e=m-1;
			}
		m=s+(e-s)/2;
	}
	return ans;
}
int lastOcc(int arr[],int n,int key)
{
	int s=0,e=n-1,m=s+(e-s)/2,ans=-1;
	while(s<=e)
	{
		if(arr[m]==key)
		{
			ans=m;
			s=m+1;
		}
		else if(arr[m]<key)
		{
			s=m+1;
		}
		else {
			e=m-1;
		}
		m=s+(e-s)/2;

	}
	return ans;

}

int main()
{
	int arr[15]={1,2,3,3,3,3,3,3,3,3,3,3,3,3,5};
	cout<<"3 in first index => "<<firstOcc(arr,15,3)<<endl;
	cout<<"3 in last index => "<<lastOcc(arr,15,3)<<endl;
	cout<<"num of 3 => "<<lastOcc(arr,15,3)-firstOcc(arr,15,3);
}