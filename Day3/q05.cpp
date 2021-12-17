#include<iostream>
//#include<queue>
#include<list>
using namespace std;
int n,m;
//void check()
//{
//	n--;
//	if(n==-1)n=m-1;
//	cout<<" "<<n<<endl;
//}
main()
{
	int i,k;
	cin>>m>>n;
	list<int> input,real,key,index;
	list<int> temp,temp2;
	if(m==1)cout<<1;
	else
	{
		for(i=0;i<m;i++)
		{
			cin>>k;
			input.push_back(k);key.push_back(0);
			if(i==n)key.push_back(1);
		}
		
		while(input.size())
		{
			if(real.size()==0)
			{
				real.push_back(input.front());
				index.push_back(key.front());
				input.pop_front();
				key.pop_front();
			//	check();
			}
			if(real.back()<input.front())
			{
				while(real.back()<input.front()&&real.size()!=0)
				{
					cout<<real.back()<<" "<<input.front()<<endl;
					temp.push_front(real.back());
					real.pop_back();
					
				//	check();
				}
				real.push_back(input.front());
				input.pop_front();
			
				while(temp.size())
				{
					input.push_back(temp.front());
					temp.pop_front();
					
				}	
			}else
			{
				real.push_back(input.front());
				input.pop_front();
				
			//	check();
			}
			
		}

	}
	
	
}
