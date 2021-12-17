#include<iostream>
#include<vector>
#define SIZE 501

using namespace std;

int table[SIZE][SIZE];

int main()
{
    int n;
    cin >> n;

    for(int i=0;i<SIZE;i++)
        for(int j=0;j<SIZE;j++)
            table[i][j] = 0;

    while(1)
    {
        int u,v,e;
        cin >> u >> v >> e;
        if(u==-1&&v==-1&&e==-1)break;
        table[u][v] = e;
    }

    for(int i=0;i<n;i++)
    {
        cout << i << " ";
        for(int j=0;j<n;j++)
        {
            if(table[i][j]!=0)
            {
                cout << j << "=" << table[i][j] << " ";
            }
        }
        cout << endl;
    }
}
