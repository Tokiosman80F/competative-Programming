#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int n,int m)
{
    if(m<0)
    {
        return 0;
    }else{
        return 1;
    }
}
int reverse(int num){
	int reverse=0,digit;
	while(num!=0)
	{
		digit=num%10;
		reverse=(reverse*10)+digit;
		num=num/10;
	}
	return reverse;
}
int main()
{
	int num;
	cin>>num;

	int num2=reverse(num);
	cout<<num2<<endl;
	if(isPalindrome(num,num2))
	{cout<<"same";}
	else cout<<"differ";
}