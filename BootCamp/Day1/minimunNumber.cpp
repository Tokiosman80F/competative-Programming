#include<bits/stdc++.h>
using namespace std;

int getMin(int arr[],int n ){
	int min=INT_MAX;
	for (int i = 0; i <n ; ++i)
	{
		/* code */
		if(arr[i]<min)
		{
			min=arr[i];
		}

	}
	return min;
}
int main()
{
	int size;
	cin>>size;
	int arr[100];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}

	cout<<"the minimum value is: "<<getMin(arr,size);

}