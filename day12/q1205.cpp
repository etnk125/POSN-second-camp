#include<iostream>
#include<math.h>
using namespace std;
int count=0;
int cc(int n)
{
	if(n==0)
	{
		count++;
		return 0;
	}
	if(n>=4)
	{
		cc(n-4);
	}
		cc(n-1);
}
main()
{
	int n;
	cin>>n;
	cc(n);
	cout<<count;
}
