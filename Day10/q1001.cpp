#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;
typedef pair<int,int> ii;
//typedef pair<float,ii> fii;
main()
{
	vector<ii> all;
	int n,m,w,val;
	bool cmd;
	cin>>n>>m;
	for(int i=0;i<n+m;i++)
	{
		cin>>cmd;
		if(cmd==1)
		{
			cin>>w>>val;
			//float k=float(w)/float(val);
			all.push_back(ii(w,val));
		}
		else
		{
			if(all.size()==0)cout<<0<<endl;
			else
			{
				sort(all.begin(),all.end());
				cout<<all.front().second<<endl;
				all.erase(all.begin());
			}
		}
	}
}
