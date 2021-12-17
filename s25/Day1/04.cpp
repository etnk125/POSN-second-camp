#include<iostream>
int sum=0,kt=0,m;
using namespace std;
void Combination(int a[], int reqLen, int start, int currLen, bool check[], int len)
{
	if(currLen > reqLen)
	return;
	else if (currLen == reqLen)
	{
		//cout<<"\t";
		sum=0;
		for (int i = 0; i < len; i++)
		{
			if (check[i] == true)
			{
			    sum+=a[i];
				//cout<<a[i]<<" ";
			}
		}
		if(sum==m)
        {
            kt++;
        }
		//cout<<"\n";
		return;
	}
	if (start == len)
	{
		return;
	}
	check[start] = true;
	Combination(a, reqLen, start + 1, currLen + 1, check, len);
	check[start] = false;
	Combination(a, reqLen, start + 1, currLen, check, len);
}

int main()
{
	int i, n;
	//cout<<"Enter the number of element array have: ";
	cin>>n;
	bool check[n];

	int arr[n];
	//cout<<"\n";
	for(i = 0; i < n; i++)
	{
		//cout<<"Enter "<<i+1<<" element: ";
		cin>>arr[i];
		check[i] = false;
	}
	cin>>m;
	for(i = 2; i <= n; i++)
	{
		//cout<<"\nThe combination of  length "<<i<<" for the given array set:\n";
		Combination(arr, i, 0, 0, check, n);
	}
	cout<<kt;
	return 0;
}
