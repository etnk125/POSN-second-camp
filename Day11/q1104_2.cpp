#include<iostream>
using namespace std;
main()
{
	int a,b,sum=0;
	cin>>a>>b;
	if(a<b)
	{
		int temp =a;
		a=b;
		b=temp;
	}
	while(b--)
	sum+=a;
	cout<<sum;
}
