#include<iostream>
//#include<map>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
typedef pair<int,int> ii;
main()
{
	int a,b,all,sum=0;
	char k;
	cin>>a>>b;
//	map<int> arr;
	vector<ii> arr;
	if(a==1)
	{
		cout<<b;
	}
	else
	{
			while(b--)
		{	
			int index=1,all=1,des=1;
			for(int i=0;i<a;i++)
			{
				scanf(" %c",&k);
				switch(k)
				{
					case '1':{arr.push_back(ii(1,1));
						break;
					}
					case '2':{arr.push_back(ii(2,1));
						break;
					}
					case '3':{arr.push_back(ii(3,1));
						break;
					}
					case '4':{arr.push_back(ii(4,1));
						break;
					}
					case '5':{arr.push_back(ii(5,1));
						break;
					}
					case '6':{arr.push_back(ii(6,1));
						break;
					}
					case '7':{arr.push_back(ii(7,1));
						break;
					}
					case '8':{arr.push_back(ii(8,1));
						break;
					}
					case '9':{arr.push_back(ii(9,1));
						break;
					}
					case '0':{arr.push_back(ii(0,1));
						break;
					}	
				}
			}
			if(a%2==0)
			{
				sort(arr.begin(),arr.end());
				int i=1;
				while(i<arr.size())
				{
					if(arr[i].first==arr[i-1].first)
					{
						arr[i-1].second++;
						arr.erase(arr.begin()+i);
					}
					else i++;
				}			
				for(int i=0;i<arr.size();i++)
				{
					if(arr[i].second%2!=0)
					{
						index=-1;
						break;
					}
					else
					{
						for(int j=1;j<=arr[i].second/2;j++)
						{
							des*=j;
						}
					//	cout<<des<<" ";
					}	
				}
				if(index!=-1)
				{
					int temp=0;
					for(int i=0;i<arr.size();i++)
					 temp+=arr[i].second;
					for(int i=1;i<=temp/2;i++)
					{
						all*=i;
						
					}//cout<<arr.size()<<"||"<<temp<<":"<<all<<";"<<des<<endl;
					all/=des;
					sum+=all;	
				}
				
			}
			else if(a%2==1)
			{
				sort(arr.begin(),arr.end());
				int i=1;
				while(i<arr.size())
				{
					if(arr[i].first==arr[i-1].first)
					{
						arr[i-1].second++;
						arr.erase(arr.begin()+i);
					}
					else i++;
				}			
				for(int i=0;i<arr.size();i++)
				{
					if(arr[i].second%2!=0)
					{
						index--;
						if(index==-1)break;
						arr[i].second--;
					}
					if(arr[i].second!=0)
					{
						for(int j=1;j<=arr[i].second/2;j++)
						{
							des*=j;
						}
					}	
				}
				if(index!=-1)
				{
					int temp=0;
					for(int i=0;i<arr.size();i++)
					 temp+=arr[i].second;
					for(int i=1;i<=temp/2;i++)
					{
						all*=i;
						
					}//cout<<arr.size()<<"||"<<temp<<":"<<all<<";"<<des<<endl;
					all/=des;
					sum+=all;	
				}
			}
			arr.clear();
			
			
		}cout<<sum;	
	}
	
	

	
}
