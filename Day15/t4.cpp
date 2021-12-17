#include<iostream>
using namespace std;
main()
{
	int i, key, j , n, count=0;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
   	for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
       if(arr[j]<=key)count++;
       else
       {
	       	while (j >= 0 && arr[j] > key)
	       {
	       		count++;
	           	arr[j+1] = arr[j];
	           	j = j-1;
	       }
	   }
       
       arr[j+1] = key;
   }
   cout<<count;
}
