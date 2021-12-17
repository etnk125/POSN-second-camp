#include<iostream>
#include<vector>
using namespace std;
main()
{
	int n,a,count[10000]={0},i,check;
	cin>>n;
	vector<int> temp;
	
	for(i=0;i<n;i++)
	{
		cin>>a;
		temp.push_back(a);
	}
	for(i=0;i<n;i++)
    {
        count[temp[i]]++;
    }
	check=temp[i-1];
    for(i=0;i<=check;i++)
    {
        if(count[i]!=0)
        {
            cout << i << " " << count[i] << "\n";
        }
    }
	
	
	
	
	 
}


