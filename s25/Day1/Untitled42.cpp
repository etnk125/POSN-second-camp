#include<iostream>
using namespace std;

 int fib(int n,int m){
    int i,j;
     int arr[100][100]={0};
    arr[0][0]=1;
    arr[0][1]=1;
    arr[1][0]=1;
    for(i=0;i<=n+1;i++){
        arr[i][0]=1;
    }
    for(i=0;i<=m+1;i++){
        arr[0][i]=1;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            arr[i][j]=arr[i][j-1]+arr[i-1][j];
        }
    }

     return arr[n-1][m-1];
}


main()
{
     int n1,n2;
    cin>>n1>>n2;
    cout<<fib(n1,n2);
    //fib(n1,n2);
}
