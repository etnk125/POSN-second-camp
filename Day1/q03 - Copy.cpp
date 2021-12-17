#include<iostream>
#include<stdio.h>
#include<list>
using namespace std;
list<char> full,op;
void clear()
{
	while(!op.empty())
	{

		if(op.back()=='(')break;
		cout<<op.back();
		op.pop_back();	
	}
	
}
 void popp()
{
	while(op.back()!='(')
	{
		cout<<op.back();
		op.pop_back();
	}op.pop_back();
}
int main()
{
	char a;
	while(a!=EOF)
	{
		
		scanf("%c",&a);
		
		if(a=='+'||a=='-'||a=='*'||a=='/'||a=='('||a==')')
		{
			if(a=='+'||a=='-')
			{
				clear();
				op.push_back(a);
			}
			else if(a=='*'||a=='/')
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
					op.push_back(a);	
			}
			else if(a=='(')op.push_back(a);
			else if(a==')')popp();
		}
		else cout<<a;
		//cout<<a<<op.size()<<full.size()<<endl;
	}
	
}

