#include<bits/stdc++.h>
using namespace std;
bool search(int arr[],int size,int key)
{
	for (int i = 0; i < size; ++i)
	{
		if(key==arr[i])
			return 1;
	}
	return 0;
}
int main()
{
	int arr[10]={10,20,30,40,50,60,70,80,90,-1};
	cout<<"enter the element"<<endl;;
	int key;
	cin>>key;

	bool found=search(arr,10,key);
	if (found)
		{
			cout<<"key is present";
		}	
		else 
			cout<<"key is absent";

}