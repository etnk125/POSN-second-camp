#include<iostream>
#include<list>
using namespace std;
void bfs(list<int>node)
{
	list<int>temp=node;
	while(temp.size())
	{
		temp.pop_front();
	}
	//cout<<node;
	//if()
}
main()
{
	int k1,k,n,m,i,j,st;
	cin>>k1>>st;
	list<int> node[k1];
	while(1)
	{
		cin>>n>>m>>k;
		if(n==-1||k==-1||m==-1)break;
		else
		{
			node[n].push_back(m);
		}
	}
	//cout<<node[st]
}
