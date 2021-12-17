#include<iostream>
#include<algorithm>
#include<utility>
#include<vector>

using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii;

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
    }

    for(int i=0;i<n;i++)
    {
        cout << i << " ";
        /*for(vector<ii>::iterator itr = graph[i].begin();itr!=graph[i].end();itr++)
        {
            ii temp = *itr;
            cout << temp.first << "=" << temp.second << " ";
        }*/
        for(int j=0;j<graph[i].size();j++)
        {
            ii temp = graph[u][j];
            cout << temp.first << "=" << temp.second << " ";
        }
        cout << endl;
    }
}
