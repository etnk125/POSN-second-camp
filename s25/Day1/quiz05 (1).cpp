#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<set>
#include<climits>

using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii;

bool iscycle(const vector<vii> &graph,int n,int start,set<int> node,int home)
{
    bool visit[n];
    int parent[n];
    for(int i=0;i<n;i++){parent[i]=INT_MIN;visit[i] = false;}

    bool ALL = 0;
    stack<int> stk;
    stk.push(0);
    parent[0] = -1;
    while(!ALL)
    {
        while(!stk.empty())
        {
            int u=stk.top();stk.pop();
            if(!visit[u])
            {
                visit[u] = true;
                for(int i=0;i<graph[u].size();i++)
                {
                    ii temp_v = graph[u][i];
                    if(temp_v.first!=parent[u]||!visit[temp_v.first])
                    {
                        parent[temp_v.first] = u;
                        stk.push(temp_v.first);
                    }
                    else return 1;
                }
            }
        }
        ALL = 1;
        for(int i=0;i<n;i++)
        {
            if(!visit[i])
            {
                ALL = 0;
                stk.push(i);
                parent[i] = -1;
                break;
            }
        }
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;

    set<int> none;
    vector<vii> graph(n);
    while(1)
    {
        int u,v,e;
        cin >> u >> v >> e;
        if(u==-1&&v==-1&&e==-1)break;
        else graph[u].push_back(ii(v,e));
    }
    if(iscycle(graph,n,0,none,0))cout << "cycle";
    else cout << "Non cycle";
}
