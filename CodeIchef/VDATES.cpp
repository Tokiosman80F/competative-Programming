#include <iostream>
using namespace std;

int main() {
	
	int testCase;
	cin>>testCase;
	while(testCase--)
	{
		int D,L,R;
		cin>>D>>L>>R;
	    if(D<L) cout<<"Too Early"<<endl;
	    else if(L<=D && D<=R) cout<<"Take second dose now"<<endl;
	    else  cout<<"Too Late"<<endl;
	   
	}
}
