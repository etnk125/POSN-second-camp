#include<iostream>
//#include<vector>
//#include<string.h>
using namespace std;
main()
{
	int n,m,k,i,income=0;
	cin>>n>>m;
	int slot[n][2]={0},car[m][2]={0};
	for(i=0;i<m;i++)car[i][1]=0;
	for(i=0;i<n;i++)slot[i][1]=0;
	for(i=0;i<n;i++)
	{
		cin>>slot[i][0];
	}
	for(i=0;i<m;i++)
	{
		cin>>car[i][0];
	}
	for(int j=0;j<2*m;j++)
	{
		i=0;
		cin>>k;
		while(slot[i][1]!=0)i++;
		if(k>0)
		{
			income+=car[k][0]*slot[i][0];
			car[k][1]=i;
			slot[i][1]=1;
		}
		if(k<0)
		{
			k*=-1;
			slot[car[k][1]][1]=0;
		}
	}
	cout<<income;
	
}
/* 3 4
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
