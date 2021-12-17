#include<iostream>
#include<algorithm>
#include<list>
using namespace std;
main()
{
	int n,a;
	char cmd;
	list<int> q;
	scanf("%d",&n);
	while(n--)
	{
		cin>>cmd;
		if(cmd=='P')
		{
			scanf("%d",&a);
			q.push_back(a);
		}
		else 
		{
			if(q.size()==0)printf("-1\n");
			else 
			{
				q.sort();
				printf("%d\n",q.back());
				q.pop_back();
			}
		}
	}
}
