#include <iostream>
#include <cmath>
#include<string>
using namespace std;
const int n=1e5+4;
int dp[n];
int main() {
	// your code goes here
	string s;int j,i;
	cin>>s;int res=0;
	for(i=0;i<s.length();i++)
	{
		if(s[i]=='(')
		{
			dp[i+1]=0;
		}
		else
		{
			j=i-dp[i]-1;
			if(s[j]=='(')
			dp[i+1]=dp[i-1]+dp[j]+2;//largest length of substring=>dp=dp[i-1]+2.
			else
			dp[i+1]=0;
		}
		res=max(res,dp[i+1]);
	}
	cout<<res;
	return 0;
}
