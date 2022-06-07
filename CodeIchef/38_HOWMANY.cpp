#include <iostream>
using namespace std;

int main() {
	int i;
	cin>>i;
	if(i>0 && i<10)
	{cout<<1<<endl;
	}
	else if(i>=10 && i<100)
	{
	    cout<<2<<endl;
	}
	else if(i>=100 && i<1000) {
	    cout<<3<<endl; 
	}
	else{
	 cout<<"More than 3 digits"<<endl;
	    
	}
	
	
	return 0;
}
