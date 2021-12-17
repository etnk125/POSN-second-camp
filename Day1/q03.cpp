#include<iostream>
#include<stdio.h>
#include<list>
#include<string.h>
using namespace std;
list<char> full,op;
inline void clear()
{
	while(!op.empty())
	{

		if(op.back()=='(')break;
		cout<<op.back();
		op.pop_back();	
	}
	
}
inline void popp()
{
	while(op.back()!='(')
	{
		cout<<op.back();
		op.pop_back();
	}op.pop_back();
}
main()
{
	char a[10000];
	cin>>a;
	int k=strlen(a);
	for(int i=0;i<k;i++)
	{
		
		
		if(a[i]=='+'||a[i]=='-'||a[i]=='*'||a[i]=='/'||a[i]=='('||a[i]==')')
		{
			if(a[i]=='+'||a[i]=='-')
			{
				clear();
				op.push_back(a[i]);
			}
			else if(a[i]=='*'||a[i]=='/')
			{
				if(op.back()=='*'||op.back()=='/')
				{
					while(op.back()=='*'||op.back()=='/')
					{
						if(op.back()=='(')break;
						cout<<op.back();
						op.pop_back();	
					}
	
				}
					op.push_back(a[i]);	
			}
			else if(a[i]=='(')op.push_back(a[i]);
			else if(a[i]==')')popp();
		}
		else cout<<a[i];
		//cout<<a<<op.size()<<full.size()<<endl;
		
	}clear();
}

