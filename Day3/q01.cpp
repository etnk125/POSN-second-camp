#include<iostream>
#include<vector>
using namespace std;
vector<int> all;
void sortt(int a)
{
	int temp;
	if(all[a*2]<all[a])
	{
		temp=all[a];
		all[a]=all[a*2];
		all[a*2]=temp;
		sortt(a*2);
	}
	else if(all[a*2+1]<all[a])
	{
		temp=all[a];
		all[a]=all[a*2+1];
		all[a*2+1]=temp;
		sortt(a*2+1);
	}
}
main()
{
	int ch,a,min,index;
	
	all.push_back(0);
	while(1)
	{
		cin>>ch;
		if(ch==10)break;
		
		switch(ch)
		{
			case 1:
			{
				printf("%d",all.size()>1?-1:1);
				break;
			}
			case 2:
			{
				cout<<all.size()-1;
				break;
			}
			case 3:
			{
				if(all.size()==1)cout<<"-1";
				else cout<<all.front();
			}
			case 4:
			{
				int temp;
				cin>>a;
				all.push_back(a);
				index=all.size()-1;
				if(all[index]<all[index/2])
				{
					temp=all[index];
					all[index]=all[index/2];
					all[index/2]=temp;
					index/=2;
				}
				break;
			}
			case 5:
			{
				if(all.size()==1)cout<<"-1";
				else
				{
					all[1]=all.back();
					all.pop_back();
					sortt(1);
					cout<<'1';	
				}
				
				break;
			}
			case 6:
			{
				if(all.size()==1)cout<<"-1";
				else
				{
					for(int i=1;i<all.size();i++)
					cout<<all[i];
				}
				break;
			}
			case 7:
			{
				cin>>a;
				if(a<all.size()&&a>=2)
				{
					cout<<all[a/2];
				}
				else cout<<"-1";
				break;
			}
			case 8:
			{
				int temp=1;
				cin>>a;
				while(all.size()>temp)
				{
					temp*=2;
				}
				if(a>0&&a<temp)
				{
					cout<<all[a*2];
				}else cout<<"-1";
				break;
			}
			case 9:
			{
				int temp=1;
				cin>>a;
				while(all.size()>temp)
				{
					temp*=2;
				}
				if(a>0&&a<temp)
				{
					cout<<all[a*2+1];
				}else cout<<"-1";
				break;
			}
		}
	}
}
