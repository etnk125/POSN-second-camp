#include<iostream>
#include<vector>
#include<set>
using namespace std;
main()
{
	int n,a,i,j,count=0;
	cin>>n;
	vector<int> all[3];
	for(j=0;j<2;j++)
	for(i=0;i<n;i++)
	{
		cin>>a;
		all[j].push_back(a);
	}
	for(j=1;j<2;j++)
	for(i=1;i<n;i++)
	{
		all[j][i]+=all[j][i-1];
	}
	for(i=0;i<n;i++)
	{
		all[2].push_back(all[0][i]+all[1][i]);
	}
	set<int> sum[3];
	for(i=0;i<3;i++)sum[i].insert(0);
	
	for(i=0;i<n;i++)
	{
		if(sum[0].find(all[0][i])!=sum[0].end())
		{
			sum[0].clear();
			count++;
			sum[3].clear();
		}
		sum[0].insert(all[0][i]);
		if(sum[1].find(all[1][i])!=sum[1].end())
		{
			sum[1].clear();
			count++;
			sum[3].clear();
		}
		sum[1].insert(all[1][i]);
	}

	
}
