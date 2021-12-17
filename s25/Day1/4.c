#include<stdio.h>
main()
{
    int z=0,m,n,i,nn;
    scanf("%d %d",&m,&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    nn=a[n-1]/m;
    int kt[nn];

    for(i=0;i<nn;i++)
    {
        kt[i]=0;
    }

    for(i=0;i<n;i++)
    {
        kt[(a[i]-1)/m-1]=1;
    }

    for(i=0;i<nn;i++)
    {
        if(kt[i]==1)
        {
            z++;
        }
    }
    printf("%d",z);
}
