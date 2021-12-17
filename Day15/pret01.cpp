#include<iostream>
using namespace std;
int arr[1002][1002],n;
int find (int arr[1002][1002] ,int i,int j)
{
	int sum;
	
	if(arr[i][j]==0)
	{
		arr[i][j]=1;
		sum=1;
		if(arr[i-1][j]==0&&i>0)sum+=find(arr,i-1,j);
		if(arr[i+1][j]==0&&i<n-1)sum+=find(arr,i+1,j);
		if(arr[i][j-1]==0&&j>0)sum+=find(arr,i,j-1);
		if(arr[i][j+1]==0&&j<n-1)sum+=find(arr,i,j+1);
		return sum;
	}else return 0;
}

main()
{
	int max=0;
	cin>>n;
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	cin>>arr[i][j];
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	{
		if(arr[i][j]==0)
		{
			int temp=find(arr,i,j);
		//	cout<<temp;
			if(max<temp)max=temp;
		}
	}
	cout<<max;
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<n;j++)
//		{
//			cout<<arr[i][j];
//		}	cout<<endl;
//	}
	
}
