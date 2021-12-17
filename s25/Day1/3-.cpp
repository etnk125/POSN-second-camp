#include<iostream>
using namespace std;
int main()
{
    int i,count[10000]={0},n,check;
    cin >> n;
    int input[n];
    for(i=0;i<n;i++)
    {
        cin >> input[i];
    }
    for(i=0;i<n;i++)
    {
        count[input[i]]++;
        if(i==n-1)
        {
            check=input[i];
        }
    }
    for(i=0;i<=check;i++)
    {
        if(count[i]!=0)
        {
            cout << i << " " << count[i] << "\n";
        }
    }
}
