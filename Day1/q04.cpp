#include<iostream>
#include<string.h>
using namespace std;
main()
{
	int count=0,i;
	char a[10000],real[10000];
	cin>>a;
	i=0;
	while(a[i]!='\0')
	{
		if(a[i]=='('||a[i]==')')
		real[count++]=a[i];
		i++;
	}
	count=1;
	int len=strlen(real);
	int data[len];
	for(i=0;i<len;i++)
	{
		if(real[i]=='(')
		{
			data[i]=count++;
		//	cout<<data[i]<<endl;
		}
		else if(real[i]==')')
		{
			int j=1;
			while(real[i-j]!='(')
			{
				j++;
			}
	//		cout<<data[i-j]<<endl;
			data[i]=data[i-j];
			real[i]='_';
			real[i-j]='_';
		}
		
	}
	for(i=0;i<len;i++)
	cout<<data[i];
//	cout<<";";

	
}
