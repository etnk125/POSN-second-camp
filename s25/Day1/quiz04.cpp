#include<iostream>
#include<algorithm>
#include<utility>
#include<vector>
#include<stack>

using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii;

void BFS(vector<vii> &graph,int n,int s)
{
    stack<int> Q;
    Q.push(s);

    bool visit[n];
    for(int i=0;i<n;i++)visit[i]=0;
    while(!Q.empty())
    {
        int u = Q.top();Q.pop();
        if(!visit[u])
        {
            visit[u] = 1;
            cout << u << " ";
            for(int i=graph[u].size()-1;i>=0;i--)
            {
                ii temp = graph[u][i];
                if(!visit[temp.first])Q.push(temp.first);
            }
        }
    }
}

int main()
{
    int n,s;
    cin >> n >> s;

    vector<vii> graph(n);
    while(1)
    {
        int u,v,e;
        cin >> u >> v >> e;
        if(u==-1&&v==-1&&e==-1)break;
        graph[u].push_back(ii(v,e));
    }

    //for(int i=0;i<n;i++)sort(graph[i].begin(),graph[i].end());
    BFS(graph,n,s);
}
