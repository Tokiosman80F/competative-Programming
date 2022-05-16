#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sumofC=0,sumofR=0, sumofS=0;
	double c,r,s;
	cin>>n;
	 	while(n--)
	{
		int part1;
		
		char part2;
		cin>>part1>>part2;

		if (part2=='C')
		{
			sumofC=sumofC+part1;
		}

		else if (part2=='R')
		{
			sumofR=sumofR+part1;
			
		}
		else if (part2=='S')
		{
			sumofS=sumofS+part1;
		
		}


	}

	int sum=sumofC+sumofR+sumofS ;
	c=(sumofC*100.00)/sum;
	r=(sumofR*100.00)/sum;
	s=(sumofS*100.00)/sum;
		cout<<"Total: "<<sum<<" cobaias"<<endl;
		cout<<"Total de coelhos: "<<sumofC<<endl;
		cout<<"Total de ratos: "<<sumofR<<endl;
		cout<<"Total de sapos: "<<sumofS<<endl;

		cout<<fixed<<setprecision(2)<<"Percentual de coelhos: "<<c<<" %"<<endl;
		cout<<fixed<<setprecision(2)<<"Percentual de ratos: "<<r<<" %"<<endl;
		cout<<fixed<<setprecision(2)<<"Percentual de sapos: "<<s<<" %"<<endl;
}
 