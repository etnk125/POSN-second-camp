#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
typedef pair<int,int> ii;
main()
{
	int n,fin,st;
	cin>>n;
	vector<ii> all;
	for(int i=0;i<n;i++)
	{
		cin>>st>>fin;
		all.push_back(ii(fin,st));
	}
	sort(all.begin(),all.end());
	while(all.size()!=0)
	{
		int i=0;
		cout<<all[0].second<<"=>"<<all[0].first<<endl;
		int temp=all[0].first;
		all.erase(all.begin());
		while(i!=all.size())
		{
			if(temp>all[i].second)
			{
				all.erase(all.begin()+i);
			}
			else i++;
		}
		
	}
	
	
	
	
	
	
//	for(int i=0;i<n;i++)
//		{
//			int temp=all[i].first;
//			cout<<temp;
//		}

}
/*
11
1 4
3 5
0 6
5 7
3 8
5 9
6 10
8 11
8 12
2 13
12 14
*/
