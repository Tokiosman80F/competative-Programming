#include<bits/stdc++.h>
using namespace std;

int getMin(int num[],int size)
{
	int min=INT_MAX;
	for(int i=0;i<size;i++)
	{
		if(num[i]<min)
			min=num[i];
	}
	return min;
}

int getMax(int num[],int size)
{
	int max=INT_MIN;
	for(int i=0;i<size;i++)
	{
		if(num[i]>max)
		{
			max=num[i];
		}
	}
	return max;
}
int main()
{
	int size;
	cin>>size;
	int num[100];
	for(int i=0;i<size;i++)
	{
		cin>>num[i];
	}

	cout<<"the max value:"<<getMax(num,size)<<endl;
	cout<<"the min value: "<<getMin(num,size);	
}