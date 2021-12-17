#include<iostream>
#include<vector>
using namespace std;
main()
{
	int k1,k,n,m,i,j;
	cin>>k1;
	//cout<<k1;
	int a[k1+500][k1+500];
	vector<int> real[k1],w[k1];
	while(1)
	{
		cin>>n>>m>>k;
		if(n==-1||k==-1||m==-1)break;
		if(k!=0)
		{
			real[n].push_back(m);
			w[n].push_back(k);
		}
	}


//////////////////print///////////
	for(i=0;i<k1;i++)
	{
		cout<<i;
		while(real[i].size()!=0)
		{
			cout<<" "<<real[i].front()<<"="<<w[i].front();
			real[i].erase(real[i].begin());
			w[i].erase(w[i].begin());
		}
		cout<<endl;	
	}
	
	
	
}
