#include<iostream>
#include<vector>
using namespace std;
main()
{
	int num,n,m,k,st;
	cin>>num>>st;
	vector<int> real;
	int a[num+1][num+1];
	for(int i=0;i<num;i++)
	for(int j=0;j<num;j++)
	{
		a[i][j]=0;
	}
	while(1)
	{
		cin>>n>>m>>k;
		if(n==-1&&m==-1&&k==-1)break;
		else
		{
			a[n][m]=k;
		}
	}
	for(int i=0;i<num;i++)
	{
		for(int j=0;j<num;j++)
		{
			cout<<a[i][j];
		}cout<<endl;
	}
	
	
	
	
}
