#include<iostream>
#include<algorithm>
using namespace std;
main()
{
	int n,a;
	cin>>n;
	int arr[n+1];
	for(int i=1;i<n;i++)arr[i]=99999;
	arr[0]=0;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		for(int j=1;j<=a;j++)
		{
			if(i+j<n)
			arr[i+j]=min(arr[i+j],arr[i]+1);
		}
	}cout<<arr[n-1];
}
