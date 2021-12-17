#include<iostream>
#include<algorithm>
using namespace std;
main()
{
	int n,count=0;
	cin>>n;
	char arr[n+1];
	int real[n];
	cin>>arr;
	for(int i=0;i<n;i++)
	{
		real[i]=arr[i];
		if(arr[i]==arr[i+1])
		count++;
	}sort(real,real+n);
	if(count==n-1)
	{
		cout<<0;
	}
	else{
		do
		{
			cout<<arr<<endl;
		}
		while(next_permutation(arr,arr+n));	
	}
}
