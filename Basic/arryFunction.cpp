#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int size)
{
	cout<<"Printing the array start"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<"The arrar are: ";
		cout<<arr[i]<<" ";
		cout<<"the end"<<endl;

	}
}
int main()
{
	int first[10]={2,2,3};
	int size=5;
	printArray(first,size);	
}