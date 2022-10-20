#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int n){

	int start=0;
	int end=n-1;

	while(start<=end)
	{
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
}

void printArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
		{cout<<arr[i]<<" ";}

cout<<endl;
}
int main()
{
	int arr1[10]={1,2,34,5,6,7,125,11,32,123};
	int arr2[10]={65,23,13,12,34,56,1343,989,90,192};

	reverse(arr1,10);
	reverse(arr2,10);

	printArray(arr1,10);
	printArray(arr2,10);
}