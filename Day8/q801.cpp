#include<iostream>
using namespace std;
main()
{
	int a,sum=0;
	cin>>a;
	while(a>=10)
	{
		sum+=1;
		a-=10;
	//	
	}
	while(a>=5)
	{
		sum+=1;
		a-=5;
	}
	while(a>=2)
	{
		sum+=1;
		a-=2;//cout<<sum;
	}
	if(a==1)sum+=a;
	cout<<sum;
}
