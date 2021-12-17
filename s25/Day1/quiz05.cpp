#include<iostream>
#include<algorithm>
#include<utility>
#include<vector>
#include<queue>
#include<climits>

using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii;

int BFS(vector<vii> &graph,int n,int start)
{
    queue<int> Q;
    Q.push(start);

    bool visit[n];
    for(int i=0;i<n;i++)visit[i]=0;

    int time = 0;
    bool ALL = 0;
    while(!ALL)
    {
        time += 1;
        while(!Q.empty())
        {
            int u = Q.front();Q.pop();
            if(!visit[u])
            {
                visit[u] = 1;
                //cout << u << " ";
                for(vector<ii>::iterator itr = graph[u].begin();itr!=graph[u].end();itr++)
                {
                    ii temp = *itr;
                    if(!visit[temp.first])Q.push(temp.first);
                }
            }
        }
        ALL = 1;
        for(int i=0;i<n;i++)if(visit[i]==0){ALL = 0;Q.push(i);break;}
    }
    return time;
}

int main()
{
    int n;
    cin >> n;

    vector<vii> graph(n);
    while(1)
    {
        int u,v,e;
        cin >> u >> v >> e;
        if(u==-1&&v==-1&&e==-1)break;
        graph[u].push_back(ii(v,e));
        //graph[v].push_back(ii(u,e));
    }

    //for(int i=0;i<n;i++)sort(graph[i].begin(),graph[i].end());
    // int mini = INT_MAX;
    // for(int i=0;i<n;i++)mini = min(mini,BFS(graph,n,i));
    cout << BFS(graph,n,0);
}
