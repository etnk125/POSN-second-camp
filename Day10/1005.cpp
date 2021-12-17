#include<iostream>
#include<vector>
using namespace std;
main()
{
	int cap,time,ncar,a;
	cin>>cap>>time>>ncar;
//	time*=2;
	vector<int> car;
	for(int i =0;i<ncar;i++)
	{
		cin>>a;
		car.push_back(a);
	}
	if(ncar%2==0)cout<<a+time<<" "<<ncar/2;
	else cout<<a+time<<" "<<(ncar+1)/2;
}
