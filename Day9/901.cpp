#include<iostream>
#include<vector>
using namespace std;
main()
{
	int n,a,count=0,index=0;
	vector<int> all;
	cin>>n;
	while(n--)
	{
		cin>>a;
		all.push_back(a);
	}
	if(n==1)index=-1;
	else
	{
		while(1)
		{
			if(all.size()==2)
			{
				if(all.front()!=all.back())
				{
					index=-1;
					break;
				}
				else if(all.front()==all.back())
				{
					index=1;
					break;
				}	
			}
			else if(all.size()==3&&all.front()==all.back())
			{
				index=1;
				break;
			}
			else if(all.front()==all.back())
			{
				all.pop_back();
				all.erase(all.begin());
			}
			else if(all.front()<all.back())
			{
				all[1]+=all[0];
				all.erase(all.begin());count++;
			}
			else if(all.front()>all.back())
			{
				all[all.size()-2]+=all[all.size()-1];
				all.pop_back();count++;
			}
//			for(int i=0;i<all.size();i++)
//			cout<<all[i];
//			cout<<endl;
			
		}
	}
		
	if(index==-1)cout<<"-1";
	if(index==1)cout<<count;
}
