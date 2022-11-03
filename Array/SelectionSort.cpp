#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int size)
{
	for (int i = 0; i < size-1; ++i)
	{
		int mainIndex=i;
		for(int j=i+1;j<size;j++)
		{
			if(arr[j]<arr[mainIndex])
			{
				mainIndex=j;
			}
		}
		swap(arr[mainIndex],arr[i]);
	}
}

void printArr(int arr[],int size){
	for(int i=0;i<size;i++)
	{
		cout<<" "<<arr[i];
	}
	cout<<endl;
}
int main()
{
	int arr[9]={27,27,98,13,87,66,52,51,56}	;
	
	printArr(arr,9);
	cout<<"----Selection Sorting----"<<endl;
	cout<<"the sorted array is :"<<endl;
	selectionSort(arr,9);
	printArr(arr,9);
}