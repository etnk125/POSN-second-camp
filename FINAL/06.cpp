#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
main()
{
	int a,b,count=1;
	cin>>a>>b;
	char tw[b][5];bool vis[b];
	for(int i=0;i<b;i++)
	{
		cin>>tw[i][0]>>tw[i][1];
		vis[i]=0;
	}
	
//	for(int i=0;i<b;i++)
//	cout<<tw[i][0]<<tw[i][1];
	vector<char> real;
	
	real.push_back(tw[0][0]);
	real.push_back(tw[0][1]);
	while(real.size()!=a)
	{
		for(int i=1;i<b;i++)
		for(int j=0;j<2;j++)
		{
			if(vis[i]==0)
			{
				if(tw[i][j]==real[0])
				{
					reverse(real.begin(),real.end());
					if(j==0)
					{
						real.push_back(tw[i][1]);
						vis[i]=1;
					}
					else
					{
						real.push_back(tw[i][0]);
						vis[i]=1;
					}
					count++;
				}
				else if(tw[i][j]==real[real.size()-1])
				{
					if(j==0)
					{
						real.push_back(tw[i][1]);
						vis[i]=1;
					}
					else
					{
						real.push_back(tw[i][0]);
						vis[i]=1;
					}
					count++;
				}	
			}
			
		}	
	}
	
	if(a=-1)cout<<-1;
	else cout<<real.size()-1;
	
}
