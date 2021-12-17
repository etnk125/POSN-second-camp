#include<iostream>
using namespace std;
main()
{
	int a,b,max,i,j,k;
	cin>>a>>b;
	int arr[a+2][b+2];
	for(i=0;i<a;i++)
	for(j=0;j<b;j++)
	cin>>arr[i][j];
	for(i=1;i<b;i++)
	{
		for(j=0;j<a;j++)
		{
			if(j==0)
			{
				if(arr[0][i-1]>arr[1][i-1])
				{
					arr[0][i]+=arr[0][i-1];	
				}
				else 
				{
					arr[0][i]+=arr[1][i-1];
				}
			}
			else if(j==a-1)
			{
				if(arr[a-1][i-1]>arr[a-2][i-1])
				{
					arr[a-1][i]+=arr[a-1][i-1];	
				}
				else 
				{
					arr[a-1][i]+=arr[a-2][i-1];
				}
			}
			else 
			{
				max=-1;
				for(k=-1;k<2;k++)
				if(max<arr[j+k][i-1])
				{
					max=arr[j+k][i-1];
				}
				
				arr[j][i]+=max;
			}
			
		}	
	}
//	for(i=0;i<a;i++)
//	{
//		for(j=0;j<b;j++)
//		cout<<arr[i][j]<<' ';
//		cout<<endl;
//	}
	
	
	max=-1;
	for(i=0;i<a;i++)
	{
		
		if(max<arr[i][b-1])
		{
			max=arr[i][b-1];
			//cout<<max;
		}
	}cout<<max;
	
	
}
