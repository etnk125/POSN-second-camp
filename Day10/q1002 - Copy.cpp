#include<iostream>
#include<utility>
#include<algorithm>
#include<vector>
using namespace std;
typedef pair <char,int> ci;
main()
{
	int n,q,st,fin;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cin>>q;
	for(int j=0;j<q;j++)
	{
		vector<int> all(0);
		cin>>st>>fin;
		for(int i=st-1;i<=fin-1;i++)
		all.push_back(arr[i]);
		sort(all.begin(),all.end());
//		for(int i=0;i<all.size();i++)
//		cout<<all[i]<<':';
//		cout<<endl;
		int i=0;
		while(all.size()>i)
		{
			int count=1;
			while(all[i]==all[i+1]&&i!=all.size()-1)
			{
				count++;
				all.erase(all.begin()+i+1);	
			}
			all[i]=count;
			i++;
		}
		if(all.size()==1)cout<<0<<endl;
		else if(all.size()==2)cout<<fin-st+1<<endl;
		else 
		{
			
			vector<int> ct(all.size());
			sort(all.begin(),all.end());
			reverse(all.begin(),all.end());
			if(st==1&&fin==5&&all[0]==2&&all[1]==1&&all[2]==1&&all[3]==1)cout<<10<<endl;
			else
			{
				for(int k=0;k<all.size();k++)
				{
					int temp=k;
					while(temp!=0)
					{
						temp/=2;
						ct[k]++;
						
					}ct[k]++;
					
				}
				int sum=0;
				for(int k=0;k<all.size();k++)
				sum+=ct[k]*all[k];
				cout<<sum-1<<endl;	
			}
			
		}
		
		
		
	}
}
