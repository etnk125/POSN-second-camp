#include<iostream>
#include<utility>
#include<algorithm>
#include<iomanip>
using namespace std;
typedef pair<float,float> fi;
main()
{
	int n,k,max=-1;
	cin>>n;
	fi a[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>k;
		a[i].second=float(i+1);
		a[i].first=float(k)/float(i+1);
		
	}
	sort(a,a+n);
	reverse(a,a+n);
//	cout<<"_____";
//	for(int i=0;i<n;i++)
//	cout<<a[i].first<<endl;
	for(int j=0;j<n;j++)
	{
		float tmp=n;
		float sum=0;
		for(int i=j;i<n;i++)
		{
			while(tmp>=a[i].second)
			{
				tmp-=a[i].second;
				sum+=a[i].first*a[i].second;
				//cout<<tmp<<":";
			}
			
			
		}//cout<<sum<<"\n";
		if(max<sum)max=sum;	
	}
	cout<<setprecision(0)<<max;
	
	
}

