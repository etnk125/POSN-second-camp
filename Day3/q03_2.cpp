#include<iostream>
#include<algorithm>
using namespace std;

main()
{
	int i,n,b,h,j;
	cin>>n;
	char k[3],name[n+1][1000];
	int a[n+1],index[n+1];
	for(i=0;i<n;i++)
	{
		cin>>name[i];
		cin>>a[i]>>k[0]>>b;
		
		index[i]=a[i]*100+b;
		a[i]=index[i];
	//	cout<<a[0][i]<<"__"<<a[1][i]<<endl;
	}
	sort(a,a+n);
	for(i=0;i<n;i++)
	{
		j=0;
		while(index[j]!=a[i])j++;
		cout<<name[j];
		h=a[i]/100;//a[1][i]
		b=a[i]%100;
		cout<<" ";
		if(h<10)cout<<'0';
		cout<<h<<":";
		if(b==0)cout<<'0';
		else if((a[i]/10)%10==0)cout<<0;
		cout<<b<<endl;
	}
}
