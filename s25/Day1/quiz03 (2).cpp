#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<stack>
#include<climits>

using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii;

void print(vector<vii> &graph,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<graph[i].size();j++)
        {
            ii temp = graph[i][j];
            cout << temp.first << " ";
        }
        cout << endl;
    }
}

int Prim(vector<vii> &graph,int n)
{
    bool visit[n];
    for(int i=0;i<n;i++)visit[i] = false;

    int dist[n],parent[n];
    for(int i=0;i<n;i++){dist[i] = INT_MAX;parent[i] = -1;}

    dist[0] = 0;
    parent[0] = -1;

    for(int i=0;i<n-1;i++)






    {
        int u=0,minimum = INT_MAX;
        for(int j=0;j<n;j++)
        {
            if(dist[j]<minimum&&visit[j]==false)
            {
                u = j;
                minimum = dist[j];
            }
        }

        visit[u] = true;
        for(int j=0;j<graph[u].size();j++)
        {
            ii temp = graph[u][j];
            if(!visit[temp.first] && dist[temp.first]>temp.second)
            {
                dist[temp.first] = temp.second;
                parent[temp.first] = u;
            }
        }
    }
    for(int i=0;i<n;i++)cout << i << " " << parent[i] << endl;
}

int main()
{
    int n;
    cin >> n;

    vector<vii> graph(n);
    while(1)
    {
        int u,v,e;
        scanf("%d %d %d",&u,&v,&e);
        if(u==-1&&v==-1&&e==-1)break;
        else graph[u].push_back(ii(v,e));
    }

    //print(graph,n);
    Prim(graph,n);
}
