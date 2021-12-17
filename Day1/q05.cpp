#include<iostream>
#include<string.h>
using namespace std;

main()
{
	char a[10000]={'\0'},d[10000];
	int i=0,j=0,index=-1,count=0;
	scanf("%s",a);
	int k=0;
	int len=strlen(a);
	while(1)
	{
		index=-1;
//		cout<<k++;
		while(1)
		{
			if(a[i]=='(')
			{
				index=i;
			}i++;
			if(a[i]==')')break;
//		cout<<a<<endl;
		}
		
		if(a[index-1]=='+'||a[index-1]=='('||index==0)
		{
//			cout<<a<<"::";
			a[i]='_';
			a[index]='_';
			j=0;
//			cout<<a<<endl;
		}
		else if(a[index-1]=='-')
		{		
//			cout<<a<<"::";
			j=0;
			while(a[index+j]!=')')
			{
				if(a[index+j]=='+')a[index+j]='-';
				else if(a[index+j]=='-')a[index+j]='+';
				j++;
			}
			a[i]='_';
			a[index]='_';
//			cout<<a<<endl;
		}
		
//	cout<<a;
	if(i>len)break;
	i=0;	
	}
//	cout<<a;
	for(i=0;i<len;i++)
	{
		if(a[i]!='_')
		d[count++]=a[i];
	}
	cout<<d;

//a-(b-c-(d+e))-f	
}

