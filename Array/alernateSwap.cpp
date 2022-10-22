#include<bits/stdc++.h>
using namespace std;

void alterSwap(int arr[],int n){
	int start=0,end=1;
	while(start<n-1)
	{
		swap(arr[start],arr[end]);
		start+=2;
		end+=2;
	}
}
void printArray(int arr[],int size){

	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main()
{	
	int arr1[5]={1,2,3,4,5};
	int arr2[6]={6,7,8,9,10,11};
	int arr3[5]={1,2,7,8,5};

	alterSwap(arr1,5);
	alterSwap(arr2,6);
	alterSwap(arr3,5);

	printArray(arr1,5);
	printArray(arr2,6);
	printArray(arr3,5);
}
		
