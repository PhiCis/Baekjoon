#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
int dp[110][110][110];
int c[110][110];
main()
{
	for(int i=0;i<=100;i++)
	{
		c[i][0]=c[i][i]=1;
	}
	for(int i=2;i<=100;i++)
	{
		for(int j=1;j<i;j++)
		{
			c[i][j]=(c[i-1][j-1]+c[i-1][j])%mod;
		}
	}
	dp[1][1][1]=1;
	for(int i=2;i<=100;i++)
	{
		for(int j=1;j<=i+1;j++)
		{
			for(int k=1;k<=i+1-j;k++)
			{
				if(k==1)
				{
					for(int l=1;l<=i+1-j;l++)
					{
						(dp[i][j][k]+=dp[i-1][j-1][l])%=mod;
					}
				}
				else if(j==1)
				{
					for(int l=1;l<=i+1-k;l++)
					{
						(dp[i][j][k]+=dp[i-1][l][k-1])%=mod;
					}
				}
				else
				{
					for(int l=1;l<=i;l++)
					{
						(dp[i][j][k]+=dp[l][j][1]*dp[i+1-l][1][k]%mod*c[i-1][l-1])%=mod;
					}
				}
//				cout<<i<<" "<<j<<" "<<k<<":"<<dp[i][j][k]<<"\n";
			}
		}
	}
	int n, l, r;
	cin>>n>>l>>r;
	cout<<dp[n][l][r];
}