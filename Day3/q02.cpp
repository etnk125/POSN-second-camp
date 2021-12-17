#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
main()
{
	unsigned long long int n,sum=0,i,k;
	cin>>n;
	unsigned long long int a[n+1];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort (a,a+n);
	list<unsigned long long int> all(a,a+n);
	while(all.size()>1)
	{		
		k=all.front();//cout<<all.front();
		all.pop_front();
		k+=all.front();//cout<<'+'<<all.front()<<'='<<k<<endl;
		all.pop_front();
		sum+=k;
		all.push_front(k);
		all.sort();	
	}
	


	cout<<sum;
	
}
