#include<iostream>
using namespace std;
int dist,x=0,y=0,k=0;
char news[2];
void fwd(int i)
{
	switch (i)
		{
			case 1: {
				y+=dist;
				news[0]='E';
				break;
			} 
			case 2:{
				x-=dist;
				news[0]='S';
				break;
			}
			case 3:{
				y-=dist;
				news[0]='W';
				break;
			}
			case 4:{
				x+=dist;
				news[0]='N';
				break;
			}
			
		}if(x>=50000||x<=-50000||y>=50000||y<=-50000)k=1;
}
main()
{
	int n,direct=1;
	char turn[3];
	news[0]='E';
	cin>>n;
	while(n--)
	{
		cin>>turn>>dist;
//		cout<<turn<<dist;
		switch (turn[0])
		{
			case 'L': {
				direct-=1;
				break;
			} 
			case 'R' :{
				direct+=1;
				break;
			}
			case 'B' :{
				direct+=2;
				break;
			}
		}
		if(direct<=0)direct+=4;
		if(direct>=5)direct-=4;
		fwd(direct);
		if(k==1)break;
	}
	if(k==1)cout<<"DEAD";
	if(k==0)printf("%d %d\n%c",y,x,news[0]);
}
