#include<iostream>
using namespace std;
typedef long double  ull;

ull fib(ull a)
{
	ull F[a+1];
	for(int i=0;i<a;i++)
	F[i]=0;
	
	F[0]=1;
	F[1]=2;
	F[2]=3;
	F[3]=4;
	F[4]=5;
	
		for(int i=5;i<=a;i++)
		{
			F[i]=F[i-1]+F[i-2]+F[i-3]+F[i-4]+F[i-5]+13;
		}
		return F[a];
	
}
int main()
{
	ull a;
	cin>>a;
	printf("%lld",fib(a));
	
}
