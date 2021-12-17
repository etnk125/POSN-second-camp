#include<iostream>
#include<algorithm>
#include<utility>
#include<climits>
#include<vector>
#include<queue>
#include<set>

using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii;

int BFS(vector<vii> &graph,set<int> number,int n,int s=0,int sum=0)
{
    //cout << number.size() << endl;
    //if(number.size()==n&&s==0){for(int i=0;i<print.size();i++)cout << print[i] << " ";return sum;}
    if(number.size()==n&&s==0){return sum;}
    else if(number.size()>=n)return INT_MAX;

    int minimum = INT_MAX;
    for(int i=0;i<graph[s].size();i++)
    {
        ii temp = graph[s][i];
        if(temp.first==0||number.find(temp.first)==number.end())
        {
            number.insert(temp.first);
            minimum = min(minimum,BFS(graph,number,n,temp.first,sum+temp.second));
            number.erase(temp.first);
        }
    }
    return minimum;
}

int BFSS(vector<vii> &graph,set<int> number,int n,vector<int> print,int mini,int s=0,int sum=0)
{
    //cout << number.size() << endl;
    if(number.size()==n&&s==0&&sum==mini){cout << s << " ";for(int i=0;i<print.size();i++)cout << print[i] << " ";cout << sum << endl;return sum;}
    //if(number.size()==n&&s==0){return sum;}
    else if(number.size()>=n)return INT_MAX;

    int minimum = INT_MAX;
    for(int i=0;i<graph[s].size();i++)
    {
        ii temp = graph[s][i];
        if(temp.first==0||number.find(temp.first)==number.end())
        {
            number.insert(temp.first);print.push_back(temp.first);
            minimum = min(minimum,BFSS(graph,number,n,print,mini,temp.first,sum+temp.second));
            number.erase(temp.first);print.pop_back();
        }
    }
    return minimum;
}

int main()
{
    int n;
    cin >> n;

    set<int> number;
    vector<int> V;
    vector<vii> graph(n);
    while(1)
    {
        int u,v,e;
        cin >> u >> v >> e;
        if(u==-1&&v==-1&&e==-1)break;
        graph[u].push_back(ii(v,e));
    }

    int mini = BFS(graph,number,n);
    BFSS(graph,number,n,V,mini);
}
