#include<iostream>
using namespace std;
main()
{
//	cout.precision(0);
	cout.setf(ios::fixed);
	int n,i;
	cin>>n;
	int speed[n+1],a=1,b=n-1;
	unsigned long long int sum;
	if(n==1)
	{
		cin>>a;
		cout<<a;
	}
	else
	{
		for(i=0;i<n;i++)
		cin>>speed[i];
		while(2*speed[1]<speed[b-1]+speed[0]&&n>3)
		{
			sum+=speed[b]+2*speed[1]+speed[0];
			b-=2;
			n-=2;
		}
		while(--n)
		{
			sum+=speed[a++]+speed[0];
		}
		cout<<sum-speed[0];
	}
		
		
}
