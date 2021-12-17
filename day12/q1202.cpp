#include<iostream>
#include<iomanip>
using namespace std;
main()
{
	long double k=1,i;
	long double temp;
	long double  a,b;
	cin>>a>>b;
	a--;
	b--;
	if(a<b)
	{
		temp=a;
		a=b;
		b=temp;
	}
	long double n=a+b;
	for(i=n;i>a;i--)
	{
		k*=i;
	
	}
	for(i=1;i<=b;i++)
	{
		k/=i;
	}
	cout<<setprecision(0)<<fixed<<k;
}
