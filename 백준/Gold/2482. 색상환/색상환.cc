#include<bits/stdc++.h>
using namespace std;
#define mod 1000000003

long long n, k, dp[1010][1010][2][2];

int main()
{
	cin>>n>>k;
	dp[1][0][0][0]=1;
	dp[1][1][1][1]=1;
	for(int i=2;i<=n;i++)
	{
		(dp[i][0][0][0]+=dp[i-1][0][1][0]+dp[i-1][0][0][0])%=mod;
		(dp[i][0][0][1]+=dp[i-1][0][1][1]+dp[i-1][0][0][1])%=mod;
		for(int j=1;j<=1000;j++)
		{
			(dp[i][j][0][0]+=dp[i-1][j][1][0]+dp[i-1][j][0][0])%=mod;
			(dp[i][j][1][0]+=dp[i-1][j-1][0][0])%=mod;
			(dp[i][j][0][1]+=dp[i-1][j][1][1]+dp[i-1][j][0][1])%=mod;
			(dp[i][j][1][1]+=dp[i-1][j-1][0][1])%=mod;
		}
	}
	cout<<(dp[n][k][1][0]+dp[n][k][0][1]+dp[n][k][0][0])%mod;
}