#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
   int n, r ,k;
   cin >> n;
   cin >> r;
   vector<bool> v (n-1);
   fill(v.begin(), v.begin()+ r-1, true);
   for(k=1;k<=n;k++)
   {
	   	do {
	   		cout<<k<<" "<<endl;
	       for (int i=0;i<=n;++i)
	           if (v[i]&&i+1!=k)
	               cout << (i+1) << " ";
	       cout << "\n";
	   } while (prev_permutation(v.begin(), v.end()));
   }
   
}
