#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<stack>
#include<set>
#include<climits>

using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef pair<int,ii> iii;
priority_queue<iii,vector<iii>,greater<iii> > Q;

bool iscycle(const vector<vii> &graph,int n)
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
                    if(temp_v.first!=parent[u]&&!visit[temp_v.first])
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

void kruskal(vector<vii> &graph,int n,priority_queue<iii,vector<iii>,greater<iii> > &PQ)
{
    while(!PQ.empty())
    {
        iii temp = PQ.top();PQ.pop();
        ii temp2 = temp.second;
        int u=temp2.first,v=temp2.second,e=temp.first;

        graph[u].push_back(ii(v,e));
        if(iscycle(graph,n))graph[u].pop_back();
        else Q.push(iii(e,ii(v,u)));
    }

}

int main()
{
    int n;
    cin >> n;

    set<int> none;
    vector<vii> graph(n);
    priority_queue<iii,vector<iii>,greater<iii> > PQ;
    while(1)
    {
        int u,v,e;
        cin >> u >> v >> e;
        if(u==-1&&v==-1&&e==-1)break;
        else PQ.push(iii(e,ii(u,v)));
        //else graph[u].push_back(ii(v,e));
    }
    kruskal(graph,n,PQ);

    while(!Q.empty())
    {
        iii temp = Q.top();Q.pop();
        ii temp2 = temp.second;
        int u = temp2.first,v = temp2.second,e = temp.first;
        graph[u].push_back(ii(v,e));
    }
    for(int i=0;i<n;i++)
    {
        sort(graph[i].begin(),graph[i].end());
        for(int j=0;j<graph[i].size();j++)
        {
            ii temp = graph[i][j];
            cout << i << " " << temp.first << endl;
        }
    }
}

