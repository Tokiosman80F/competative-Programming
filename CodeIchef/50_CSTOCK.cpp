#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int testCase;
	cin>>testCase;
	while(testCase--)
	{
	    float s,a,b,c;
	    cin>>s>>a>>b>>c;
	    s=s+(s*(c/100));
	    if(a<=s && b>=s)
	    cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	    
	}
}