#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<climits>

using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii;

int shortest_path(vector<vii> &graph,int n,int start)
{
    bool visit[n];
    for(int i=0;i<n;i++)visit[i] = false;

    int dist[n],parent[n];
    for(int i=0;i<n;i++){dist[i] = INT_MAX;parent[i] = INT_MIN;}

    priority_queue<ii,vector<ii>,greater<ii> > PQ;
    PQ.push(ii(0,start));dist[start] = 0;parent[start] = -1;

    while(!PQ.empty())
    {
        ii temp = PQ.top();PQ.pop();
        int u = temp.second;

        if(!visit[u])
        {
            visit[u] = true;
            for(int j=0;j<graph[u].size();j++)
            {
                ii temp_v = graph[u][j];
                int v = temp_v.second,e = temp_v.first;
                if(e+dist[u]<=dist[v])
                {
                    dist[v] = e+dist[u];
                    parent[v] = u;
                    PQ.push(ii(e,v));
                }
            }
        }
    }

    /*for(int i=0;i<n;i++)
    {
        cout << i << " " << dist[i] << " " << parent[i] << " " << visit[i] << endl;
    }*/
    for(int i=0;i<n;i++)
    {
        if(i==start)cout << start << endl;
        else if(parent[i]==INT_MIN)cout << "-1" << endl;
        else
        {
            int j = i;
            stack<int> stk;
            while(j!=-1)
            {
                stk.push(j);
                j = parent[j];
            }
            while(!stk.empty())
            {
                cout << stk.top() << " ";
                stk.pop();
            }
            cout << endl;
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
        else graph[u].push_back(ii(e,v));
    }

    shortest_path(graph,n,s);
}
