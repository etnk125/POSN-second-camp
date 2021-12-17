#include <iostream>
using namespace std;
int t(int n)
{
    if(n==1)return 0;
    else
    {
        return n+t(n/2)+t(n-n/2);
    }
}
int main()
{
    int n;
    cin >> n;
    cout << t(n) ;
}
