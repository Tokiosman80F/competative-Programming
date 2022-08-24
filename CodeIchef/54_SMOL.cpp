#include<bits/stdc++.h>
using namespace std;
int main()
{
	int testCase;
	cin>>testCase;
	while(testCase--)
	{
        int a,b;
        cin>>a>>b;
        if(a>=b)
        {
            while(a!=1)
            a=a-b;

            cout<<a<<endl;
        }
        else{
            cout<<a<<endl;
        }
        
	}
}	