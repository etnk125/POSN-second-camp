#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
main()
{
	int i,j,n,m,index=0,k;
	cin>>n>>m;
	vector<int> first,all,temp,real;
	for(i=0;i<n;i++)
	{
		first.push_back(i+1);
		all.push_back(i+1);
	}
	
	for(i=0;i<m;i++)
	{
		cin>>k;
		temp.push_back(k);
	}
	sort(temp.begin(),temp.end());
	for(i=m-1;i>=0;i--)
	{
		first.erase(first.begin()+temp[i]-1);
	}
		
	for(i=0;i<first.size();i++)
	{
		real.push_back(first[i]);
		for(j=0;j<n;j++)
		if(all[j]!=real[0])
		real.push_back(all[j]);
		
		do {
			cout<<real[0];
			for(j=1;j<n;j++)
			printf(" %d",real[j]);
			cout<<endl;
    	
 		} while ( next_permutation(real.begin()+1,real.end()) );
 		real.empty();
 		real.clear();
	}

}
