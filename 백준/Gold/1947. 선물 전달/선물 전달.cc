#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000000
int dp[1000010];
main()
{
	dp[0]=1;
	dp[1]=0;
	dp[2]=1;
	for(int i=3;i<=1000000;i++)
	{
		dp[i]=(i-1)*(dp[i-1]+dp[i-2])%mod;
	}
	int n;
	cin>>n;
	cout<<dp[n];
}