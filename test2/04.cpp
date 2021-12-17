#include<iostream>
#include<vector>
using namespace std;
main()
{
	int i,n,k,j,count=0;
	cin>>n;
	vector<int> a;
	for(i=0;i<n;i++)
	{
		cin>>k;
		a.push_back(k);
	}
	for(i=0;i<n-1;i++)
	for(j=i+1;j<n;j++)
	{
		if(a[j]<a[i])count++;
	}
	cout<<count;
	
	
}
