#include<iostream>
//#include<algorithm>
#include<vector>
using namespace std;
main()
{
	 long long n,a,count=0,i;
	cin>>n;
	 long long temp=n;
//	vector<int> arr;
//	for(int i=0;i<n;i++)
//	{
//		cin>>a;
//		arr.push_back(a);
//	}
	if(n==1)cout<<1;
	else
	{
		for(i=1;i<n;i++)
		{
			if(temp-i>=0)
			{
				temp-=i;
				count++;
			}
			else break;
		}
		cout<<fixed <<count;	
	}	
	
	
	
	
}
