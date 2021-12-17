#include<iostream>
using namespace std;
main()
{
	int i,j,k,n;
		cin>>n;
	int a[n][n];
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	a[i][j]=0;
	while(1)
	{
		cin>>i>>j>>k;
		if(i==-1&&j==-1&&k==-1)break;
	//	if(a[i][j]==0||k<a[i][j])
		a[i][j]=k;
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(int k=0;k<n;k++)
				if(a[j][i]==1&&a[i][k]==1)a[j][k]=1;
			
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<' ';	
		}cout<<endl;
	}


}
