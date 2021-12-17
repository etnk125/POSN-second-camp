#include<iostream>
#include<utility>
#include<algorithm>
#include<iomanip>
using namespace std;
typedef pair<int,int> ii;
main()
{
	int n,k,max=-1;
	cin>>n;
	ii a[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>k;
		a[i].first=k;
		a[i].second=i+1;
		
	}
	sort(a,a+n);
	reverse(a,a+n);
//	cout<<"_____";
//	for(int i=0;i<n;i++)
//	cout<<a[i].first<<endl;
	for(int j=0;j<n;j++)
	{
		int b=n,sum=0;
		for(int i=j;i<n;i++)
		{
			while(b>=a[i].second)
			{
				b-=a[i].second;
				sum+=a[i].first;
				//cout<<tmp<<":";
			}			
		}//cout<<sum<<"\n";
		if(max<sum)max=sum;	
	}
	cout<<max;
	
	
}

