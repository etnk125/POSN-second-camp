#include<iostream>
#include<vector>
using namespace std;
main()
{
	int n,vala=0,valb=0;
	cin>>n;
	vector<char> out;
	while(n--)
	{
		int a,b;
		cin>>a>>b;
		if(a<=b)
		{
			if(vala+a-valb<=500&&vala+a-valb>=-500)
			{
				vala+=a;
				out.push_back('A');
			}
			else
			{
				valb+=b;
				out.push_back('B');
			}
		}
		else if(a>b)
		{
			if(valb+b-vala<=500&&valb+b-vala>=-500)
			{
				valb+=b;
				out.push_back('B');
			}
			else
			{
				vala+=a;
				out.push_back('A');
			}
		}
	
		
	}
	for(int i=0;i<out.size();i++)
	{
		cout<<out[i]<<" ";
	}
}
