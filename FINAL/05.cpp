#include<iostream>
#include<vector>
using namespace std;
main()
{
	int n;
	cin>>n;
	int a[n][n],sum=0,max=-9999,indexx=0,indexy=0;
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	{
		cin>>a[i][j];
		if(a[i][j]>0)sum=1;
	}
	if(sum==0)
	{
		for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
				indexx=i;
				indexy=j;
			}
		}
		printf("%d",max);
		for(int i=0;i<4;i++)
		printf(" (%d, %d)",indexx,indexy);
	}

		
	
	
}
