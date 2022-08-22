#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int testCase;
	cin>>testCase;
	while(testCase--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    int maxResult=max({a+b,b+c,a+c});
	    cout<<maxResult<<endl;
	    
	}
	return 0;
}
