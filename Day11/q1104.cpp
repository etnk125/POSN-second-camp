
#include<iostream>
#include<vector>
#include<algorithm>
#include<stdio.h>
 
using namespace std;
int makeEqualLength(string &str1, string &str2)
{
    int len1 = str1.size();
    int len2 = str2.size();
    if (len1 < len2)
    {
        for (int i = 0 ; i < len2 - len1 ; i++)
            str1 = '0' + str1;
        return len2;
    }
    else if (len1 > len2)
    {
        for (int i = 0 ; i < len1 - len2 ; i++)
            str2 = '0' + str2;
    }
    return len1; 
}
string addBitStrings( string first, string second )
{
    string result; 
    int length = makeEqualLength(first, second);
    int carry = 0;  
    for (int i = length-1 ; i >= 0 ; i--)
    {
        int firstBit = first.at(i) - '0';
        int secondBit = second.at(i) - '0';
 
        int sum = (firstBit ^ secondBit ^ carry)+'0';
 
        result = (char)sum + result;
 
        carry = (firstBit&secondBit) | (secondBit&carry) | (firstBit&carry);
    }
 
    if (carry)  result = '1' + result;
 
    return result;
}
int multiplyiSingleBit(string a, string b)
{  return (a[0] - '0')*(b[0] - '0');  }
 
long int multiply(string X, string Y)
{
    int n = makeEqualLength(X, Y);
 
    if (n == 0) return 0;
    if (n == 1) return multiplyiSingleBit(X, Y);
 
    int fh = n/2;   
    int sh = (n-fh); 
    string Xl = X.substr(0, fh);
    string Xr = X.substr(fh, sh);
    string Yl = Y.substr(0, fh);
    string Yr = Y.substr(fh, sh);
    long int P1 = multiply(Xl, Yl);
    long int P2 = multiply(Xr, Yr);
    long int P3 = multiply(addBitStrings(Xl, Xr), addBitStrings(Yl, Yr));
 
    return P1*(1<<(2*sh)) + (P3 - P1 - P2)*(1<<sh) + P2;
}
int main()
{
    int a,b;
    cin>>a>>b;
    vector<char> A,B;
    while(a!=0)
    {
    	if(a%2==0)A.push_back('0');
    	if(a%2==1)A.push_back('1');
    	
    	a/=2;
	}
	while(b!=0)
    {
		if(b%2==0)B.push_back('0');
    	if(b%2==1)B.push_back('1');
    	b/=2;
	}
	reverse(A.begin(),A.end());
	reverse(B.begin(),B.end());
	char aa[A.size()+5000],bb[B.size()+5000];
	for(int i=0;i<A.size();i++)
	aa[i]=A[i];
	for(int i=0;i<B.size();i++)
	bb[i]=B[i];
    printf ("%ld\n", multiply(aa,bb));
}
