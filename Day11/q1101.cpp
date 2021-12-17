#include<iostream>
#include<map>
using namespace std;
main()
{
	int n,a,x,count,i;
	cin>>n;
	map<int,int> all;
	for(i=0;i<n;i++)
	{
		cin>>a;
		all[a]++;
	}
	cin>>x;
	if(all[x]>n/2)cout<<"true";
	else cout<<"false";
}
//	for(i=0;i<all.size();i++)
//	{
//		cout<<all[i].first<<":";
//	}
//	cout<<endl;
//	for(i=0;i<all.size();i++)
//	{
//		cout<<all[i].second<<":";
//	}

