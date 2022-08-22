
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int testCase,input;
	cin>>testCase;
	while(testCase--)
	{
	    cin>>input;
	    if(input>1 && input<100) cout<<"Easy"<<endl;
	    else if(input>=100 && input<200) cout<<"Medium"<<endl;
	    else if(input>=200 && input<=300) cout<<"Hard"<<endl;
	}
}

