#include<iostream>
#include<vector>
#include<queue>
#define SIZE 501

using namespace std;

int table[SIZE][SIZE];

void BFS(int n)
{
    queue<int> Q;
    Q.push(0);

    bool visit[n];
    for(int i=0;i<n;i++)visit[i]=0;

    bool ALL = 0;
    int time = 0;
    while(!ALL)
    {
        int island = 0;
        while(!Q.empty())
        {
            int u = Q.front();Q.pop();
            if(!visit[u])
            {
                visit[u] = 1;
                island += 1;
                for(int j=0;j<n;j++)
                {
                    if(table[u][j] && !visit[j])Q.push(j);
                }
            }
        }
        ALL = 1;
        for(int i=0;i<n;i++)if(visit[i]==0){ALL=0;Q.push(i);break;}
        cout << time << " " << island << endl;
        time+=1;
    }
}

int main()
{
    int n;
    cin >> n;

    for(int i=0;i<SIZE;i++)
        for(int j=0;j<SIZE;j++)
            table[i][j] = 0;

    while(1)
    {
        int u,v;
        cin >> u >> v;
        if(u==-1&&v==-1)break;
        table[u][v] = 1;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)cout << table[i][j] << " ";
        cout << endl;
    }

    BFS(n);
}
