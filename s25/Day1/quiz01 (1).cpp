#include<iostream>
#include<queue>
#define SIZE 201

using namespace std;

int table[SIZE][SIZE] = {0};

void print(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)cout << table[i][j] << " ";
        cout << endl;
    }
}

void BFS(int start,int n)
{
    bool visit[n];
    for(int i=0;i<n;i++)visit[i] = false;

    queue<int> Q;
    Q.push(start);

    bool first = true;
    while(!Q.empty())
    {
        int u = Q.front();Q.pop();
        if(!visit[u])
        {
            if(first)first = false;
            else visit[u] = true;
            for(int j=0;j<n;j++)
            {
                if(table[u][j]==1)Q.push(j);
            }
        }
    }
    for(int i=0;i<n;i++)
        if(visit[i])table[start][i] = 1;
    //print(n);
}

int main()
{
    int n;
    cin >> n;

    while(1)
    {
        int u,v,e;
        cin >> u >> v >> e;
        if(u==-1&&v==-1&&e==-1)break;
        table[u][v] = 1;
    }

    //print(n);
    for(int i=0;i<n;i++)BFS(i,n);

    print(n);
}
