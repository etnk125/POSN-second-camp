#include<iostream>
using namespace std;
main()
{
	int i,n,m,j,degree,max=-1;
	cin>>n>>m;
	int s1[n+1],s2[m+1],d1[n+1],d2[m+1];
	for(i=0;i<n;i++)
	{
		cin>>s1[i]>>d1[i];
	}
	for(i=0;i<m;i++)
	{
		cin>>s2[i]>>d2[i];
	}
	int d[10001];
	{
		for(j=0;j<m;j++)
		for(i=0;i<n;i++)
		{
			degree=d1[i]+d2[j];
			d[degree]+=s1[i]*s2[j];
			if(degree>=max)max=degree;
		}
	}while(max>-1)
	{
		if(d[max]!=0)
		printf("%d %d\n",d[max],max);
		max--;
	}
}
