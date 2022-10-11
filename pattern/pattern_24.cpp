/*
		1
	1   2	 1


*/ 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,row=1;
    cin>>n;
    while(row<=n)
    {
    	// printing space
    	int space=n-row;
    	while(space)
    	{
    		cout<<" ";
    		space--;
    	}
    	int col=1;
    	while(col<=row)
    	{
    		cout<<col;
    		col++;
    	}
    	int start=row-1;
    	while(start)
    	{
    		cout<<start;
    		start--;
    	}
    	cout<<endl;
    	row++;
    }
}