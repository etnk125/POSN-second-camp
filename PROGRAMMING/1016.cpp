#include<iostream>
#include<math.h>
//#include<string.h>
using namespace std;
main()
{
	int a=1;
	double x=0,y=0,k=sqrt(2);
	char b[5];
	while(1)
	{
		cin>>a>>b;
	//	cout<<a<<b;
		double a2=a;
		if(a==0)break;
		else if(b[0]=='N'&&b[1]=='E')
		{
			y+=a2/k;
			x+=a2/k;
		}
		else if(b[0]=='S'&&b[1]=='E')
		{	
			y-=a2/k;	
			x+=a2/k;
		}
		else if(b[0]=='N'&&b[1]=='W')
		{
			y+=a2/k;
			x-=a2/k;
		}
		else if(b[0]=='S'&&b[1]=='W')
		{
			x-=a2/k;
			y-=a2/k;
		}
		else if(b[0]=='N')y+=a2;
		else if(b[0]=='S')y-=a2;
		else if(b[0]=='E')x+=a2;
		else if(b[0]=='W')x-=a2;
	}
	double way=sqrt(pow(x,2)+pow(y,2));
	printf("%.3f %.3f\n%.3f",x,y,way);
	
}
