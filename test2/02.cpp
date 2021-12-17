#include<iostream>
#include<vector>
#include<algorithm>
#include<stdlib.h>
#include<utility>
using namespace std;
typedef pair<int,int> ii;
main()
{
	int m,n,l,a,k,b,max=-1,count,index;
	cin>>m>>n>>l;
	vector<int> zero;
	vector<bool> v(m);
	vector<ii> dog0,dog;
	for(int i=0;i<m;i++)
	{
		cin>>a;
		zero.push_back(a);
	}
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		dog0.push_back(ii(a,b));
	}
	sort(zero.begin(),zero.end());
	for(int r=1;r<=m;r++)
	{
	//	fill(v.begin(),v.end(),false);
		fill(v.end()-r,v.end(),true);
		
		do
		{
			count=0;
			dog=dog0;
			for(int i=0;i<m;i++)
			if(v[i])
			{
				
				for(k=0;k<dog.size();k++)
				if(abs(zero[i]-dog[k].first)+dog[k].second<=l)
				{
					count++;
					dog.erase(dog.begin()+k);
					k--;
				}
				if(count>max)
				{
					max=count;
					index=r;
//					for(int i=0;i<m;i++)
//					cout<<v[i];
//					cout<<endl;
				}
			}

		}
		while(next_permutation(v.begin(),v.end()))	;
	}cout<<index;
	
}
