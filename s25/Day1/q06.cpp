#include<iostream>
#include<vector>

using namespace std;
main()
{
	int n,m,k,i,income=0,com;
	int slot[n][2],car[m][2];
	vector<int> q;
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		cin>>slot[i][0];
	}
	for(i=0;i<m;i++)
	{
		cin>>car[i][0];
	}
	for(i=0;i<2*m;i++)
	{
		cin>>com;
		if(com>0)
		{
			q.push_back(k);
		}
	}
	
	
	cout<<income;
	

}
