#include<iostream>
using namespace std;
main()
{
	int a[6][2],index=0;
	bool vis[6][2]={0};
	for(int i=0;i<6;i++)
	for(int j=0;j<2;j++)
	{
		cin>>a[i][j];
	}
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<2;j++)
		{
			int count=1;
			if(vis[i][j]==0)
			{
				for(int k=0;k<6;k++)
				{
					for(int l=0;l<2;l++)
					{
						if(a[i][j]==a[k][l])
						{
							vis[k][l]=1;
							count++;
							if(l==0)l++;
						}
						if(count==4)break;
					}
					if(count==4)break;
				}
				if(count<4)
				{
					index=1;
					cout<<"N";break;
				}			
			}
		}
		if(index==1)break;
	}
	if(index==0)cout<<"Y";
	
	
}
