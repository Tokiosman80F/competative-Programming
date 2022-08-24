#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int testCase;
	cin>>testCase;
	while(testCase--)
	{
	    int w1,w2,x1,x2,m;
	    cin>>w1>>w2>>x1>>x2>>m;
	    x1=x1*m;
	    x2=x2*m;
	    if(x1<=w2-w1 && x2>=w2-w1) cout<<1<<endl;
	    else cout<<0<<endl;
	}
}	
