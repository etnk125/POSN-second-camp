#include<iostream>
#include<math.h>
using namespace std;
main()
{
	unsigned long long  a;
	cin>>a;
	unsigned long long  temp=8*a+1;
	unsigned long long temp2=sqrt(temp);
	temp2*=temp2;
	a=sqrt(temp)-1;
	if(temp==temp2)
	{
		if(a%2==0)cout<<(sqrt(temp)-1)/2;
	}	
	else cout<<-1;
}
