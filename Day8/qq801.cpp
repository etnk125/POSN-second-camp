#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
main()
{
	char arr[12],temp[12];
	cin>>arr;
	int n=strlen(arr),count=0;
	strcpy(temp,arr);
	sort(arr,arr+n);
	if(!strcmp(temp,arr))cout<<0;
	else
	{
		do
		{
			if(arr[0]!=temp[0])
			cout<<arr<<endl;
		}
		while(next_permutation(arr,arr+n));	
	}
	
	
}
