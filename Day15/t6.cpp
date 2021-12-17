#include<iostream>
using namespace std;
void permute(int a[], int i, int n)
{
   int j;
   if (i == n)
   {
   	 for(int j=0;j<n;j++)
   	 cout<< a[j]<<' ';
   	 cout<<endl;
   }
   else
   {
       for (j = i; j < n; j++)
       {
        swap(a[i], a[j]);          
        permute(a, i+1, n);
        swap(a[i], a[j]);
       }
   }
} 

int main()
{
	int n;cin>>n;
   int a[n];
   
   for(int i=0;i<n;i++)
   {
   		a[i]=i;
   }
   permute(a, 0, n);
}
