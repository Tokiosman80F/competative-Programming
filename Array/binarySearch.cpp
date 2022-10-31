#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int n,int key)
{
		int start=0;
		int end=n-1;
		int mid=start+(end-start)/2;
		while(start<=end){
			if(arr[mid]==key)
			{
				return mid;
			}
			 if (arr[mid]<key)
			{
				start=mid+1;

			}
			else{
				end=mid-1;
			}
			mid=(start+end)/2;
		}
		return -1;
}
int main()
{
	int arrEven[6]={2,4,6,8,10,12};
	int arrOdd[7]={3,5,7,9,11,13,15};
	int key;
	cin>>key;
	cout<<"the return "<<binarySearch(arrEven,6,8)<<endl;
	cout<<"the return "<<binarySearch(arrOdd,7,key);	
}