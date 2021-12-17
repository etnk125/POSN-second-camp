#include<iostream>
using namespace std;
main()
{
	int m,n;
	cin>>m>>n;
	int a[m][n];
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	cin>>a[i][j];
	
	for(int i=1;i<m;i++)
	for(int j=0;j<n;j++)
	{
		if(j==0)
		{
			if(a[i-1][j]>a[i-1][j+1])a[i][j]+=a[i-1][j];
			else a[i][j]+=a[i-1][j+1];
		}
		else if(j==n-1)
		{
			if(a[i-1][j]>a[i-1][j-1])a[i][j]+=a[i-1][j];
			else a[i][j]+=a[i-1][j-1];
		}
		else
		{
			int max=-1;
			for(int k=-1;k<2;k++)
			if(max<a[i-1][j+k])max=a[i-1][j+k];
			a[i][j]+=max;
		}
	}
	int max=-1;
	for(int i=0;i<n;i++)
	if(max<a[m-1][i])max=a[m-1][i];
	cout<<max;
	
}
