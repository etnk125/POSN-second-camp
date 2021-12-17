#include<iostream>
#include<math.h>

using namespace std;
int multi(int a,int b,int len)
{
	if(len==1)return a*b;
	int a1=a/pow(10,len/2);
	int a0=fmod(a,pow(10,len/2));
	int b1=b/pow(10,len/2);
	int b0=fmod(b,pow(10,len/2));
	return multi(a1,b1,len-len/2)*pow(10,len/2*2)+((multi(a1,b0,len-len/2)+multi(a0,b1,len-len/2))*pow(10,len/2))+multi(a0,b0,len-len/2);
}

main()
{
	int a,b,len=1;
	cin>>a>>b;
	int temp=a;
	while(temp>10)
	{
		len++;
		temp/=10;
	}
	cout<<multi(a,b,len);
}
