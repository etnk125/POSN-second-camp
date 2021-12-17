#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
//	cout<<"a"<<endl;
	int a,b,c,n=1000;
	float j,k,mid;
	cin>>a>>b>>c>>j>>k;
	
	while(n--)
	{
		mid=(j+k)/2;
		float y=a*mid*mid+b*mid+c;
		float d=2*a*mid+b;
		if((y>0&&d<0)||(y<0&&d>0))
			j = mid;
		else 
			k = mid;
	}
//	cout.precision(4);
//	cout.setf(ios::fixed);
	cout<<setprecision(4)<<mid;
}
