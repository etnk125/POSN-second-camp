#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;
main()
{
	int n,m;
	string k,l;
	vector<string> all;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>k;
		all.push_back(k);
	}
	sort(all.begin(),all.end());
	cin>>m;
	for(int i=0;i<m;i++)
	{
		int h=0,j=0;
		cin>>k>>l;
		while(all[h]!=k)h++;
		while(all[j]!=l)j++;
		if(h>j)
		{
			string temp;
			temp=all[h];
			all.erase(all.begin()+h);
			all.insert(all.begin()+j,temp);
		}
	}
	for(int i=0;i<n;i++)
	cout<<all[i]<<' ';
}
