#include<iostream>
#include<string.h>
using namespace std;
main()
{
		int n,m,time,i,j,count;
		cin>>n>>m;
		char arr[n+1][m+1],word[17];
		for(i=0;i<n;i++)
		cin>>arr[i];
		cin>>time;
		while(time--)
		{
			cin>>word;
			int len=strlen(word);
			for(i=0;i<n;i++)
			{
				for(j=0;j<m;j++)
				{
					if(arr[i][j]==word[i])
					{
						if(m-j>=len)
						{
							for(k=1;k<len;k++)
							{
								if(word[k]!=arr[i][j+k])
								{
									break;
								}
								count++;
							}
							if(count==len-1)
							{
								index=1;
								break;
							}
						}
					}
				}if(index==1)	
			}
			
		}
}
