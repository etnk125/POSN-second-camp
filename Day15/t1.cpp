#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char b[100],a[100];
	cin>>a>>b;
	int l=strlen(a),r=strlen(b);
	if(l<r)
	{
		int temp=l;
		l=r;
		r=temp;
	}
	for(int i=0;i<r;i++)
	{
		if(a[i]=='1'&&b[i]=='1')cout<<'1';
		else cout<<'0';
	}
	cout<<endl<<r;
	
	
	
}
