#include<iostream>
#include<queue>
using namespace std;
main()
{
	int n,a;
	char cmd;
	priority_queue<int> q;
	scanf("%d",&n);
	while(n--)
	{
		cin>>cmd;
		if(cmd=='P')
		{
			scanf("%d",&a);
			q.push(a);
		}
		else 
		{
			if(q.size()==0)printf("-1\n");
			else 
			{
				printf("%d\n",q.top());
				q.pop();
			}
		}
	}
}
