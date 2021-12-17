#include<iostream>
using namespace std;
main()
{
	int n,index=0;
	cin>>n;
	for(int i=1;i<n;i++)
	{
		int j=i;
		int temp=j;
		while(j>0)
		{
			temp+=j%10;
			j/=10;
		}
		if(temp==n)
		{
			index =i;
			break;
		}
	}
	if(index==0)cout<<0;
	else cout<<index;
}
