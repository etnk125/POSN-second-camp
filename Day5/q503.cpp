#include<iostream>
using namespace std;	
int nvertex,weight[1000][1000];



void dijkstra( int start)
	{ 
		int i, j, v, w, weigh, dist;
		int intree[1000]; 		// is the vertex in the tree ?
		int distance[1000]; // vertex distance from start
		int parent[1000]; // keep parent of each node
	
		for	(i=0; i < nvertex; i++) // initial values
		{ 
			intree[i] =-1; distance[i] = 50000;
			parent[i] = -1;
		}
		distance[start] = 0; // distance from start = 0
		v = start;

		while(intree[v] == -1) // if vertex v is not in the tree
		{
			intree[v] = 1; // set vertex v is the member of the tree
			for(i=0; i < nvertex ; i++) // maintain distances and their parent
			{ 
				weigh = weight[v][i]; // find w(v, i)
				if(distance[i] > distance[v] + weigh) // if w(start, i) > w(start, v) + w(v, i)
				{ 
					distance[i] = distance[v] + weigh; // update min w(start, i)
					parent[i] = v; // update parent of vertex i
				}
			}
			v=0; dist= 50000;
			for(i=1 ; i <nvertex; i++) // find the vertex i that holds the min dist.
			if((intree[i] == -1) && (dist > distance[i]))
			{ 
				dist = distance[i];
				v = i; 
			}
		}
		for(i=0;i<nvertex;i++)
		{
			cout<<distance[i];
		}
	
	}
main()
{
	int i,j,st,k;
	cin>>nvertex>>st;
	while(1)
	{
		cin>>i>>j>>k;
		if(k==-1)break;
		weight[i][j]=k;
	}
	dijkstra(st);
	
}
