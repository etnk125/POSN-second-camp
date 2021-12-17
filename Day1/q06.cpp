#include<iostream>
#include<list>
using namespace std;
main()
{
	int n,m,k,i,income=0,com,j;
	
	list<int> q;
	cin>>n>>m;
	int slot[n][2],car[m+1];
	for(i=1;i<=n;i++)
	{
		cin>>slot[i][0];
		slot[i][1]=0;
//		cout<<slot[i][0]<<endl;
	}
	for(i=1;i<=m;i++)
	{
		cin>>car[i];
//		cout<<car[i][0]<<endl;
	}
	for(i=1;i<=2*m;i++)
	{
		cin>>com;
		if(com>0)
		{
			for(j=1;j<=n;j++)
			{
				if(slot[j][1]==0)
				{
					income+=slot[j][0]*car[com];
					slot[j][1]=com;break;
					
				}
				else if (j==n)
				{
					q.push_back(com);
				}	
			}
		}
		else if(com<0)
		{
			com*=-1;
			for(j=1;j<=n;j++)
			{
				if(slot[j][1]==com)
				{
				slot[j][1]=0;
					if(!q.empty())
					{
						slot[j][1]=q.front();
						income+=slot[j][0]*car[q.front()];
						q.pop_front();
					}
					break;
				
				}
			}
			
			
			
		}
		
	}
	
	
	cout<<income;
	

}
/* 
3 4
2
3
5
200
100
300
800
3
2
-3
1
4
-4
-2
-1
*/
