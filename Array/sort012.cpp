#include<bits/stdc++.h>
using namespace std;

int  sortOne(int arr[],int n){

	int low=0,mid=0,high=n-1;
	while(mid<=high)
	{
		if(arr[mid]==0)
		{
			swap(arr[mid],arr[low]);
			mid++;
			low++;
		}
		else if(arr[mid]==1)
		{
			mid++;
		}
		else if(arr[mid]==2)
		{
			swap(arr[mid],arr[high]);
			high--;
		}
	}
}

void printArray(int arr[],int n){
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int arr[6]={2,2,2,1,1,0};
	sortOne(arr,6);
 printArray(arr,6);	
}