#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0,12 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
    sort(arr,arr+n);
    for (int i = 0; i < 3; ++i)
    	{
    		/* code */
    		cout<<arr[i]<<endl;
    	}	
}