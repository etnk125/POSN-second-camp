#include<iostream>
using namespace std;
main()
{
	int n;
	cin>>n;
	int count=0,temp=n;
	while(temp!=1)
	{
		temp/=2;
		count++;
	}
	cout<<count*n;
}
