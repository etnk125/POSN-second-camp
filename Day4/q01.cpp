#include<iostream>
using namespace std;
main()
{
	int k1,k,n,m,i,j;
	cin>>k1;
	//cout<<k1;
	int a[k1+500][k1+500];
	while(1)
	{
		cin>>n>>m>>k;
		if(n==-1||k==-1||m==-1)break;
		else{
			a[n][m]=k;
		}
	}
	for(i=0;i<k1;i++)
	{
		cout<<i;
		for(j=0;j<k1;j++)
		{
			if(a[i][j]>0)cout<<" "<<j<<"="<<a[i][j];
		}
		cout<<endl;	
	}
	
	
	
}
