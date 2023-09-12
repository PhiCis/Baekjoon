#include<bits/stdc++.h>
using namespace std;

int n, m, k, dp[20][20];
int main()
{
	scanf("%d%d%d", &n, &m, &k);
	if(k==0)
	{
		dp[1][1]=1;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				if(i==1&&j==1) continue;
				dp[i][j]=dp[i-1][j]+dp[i][j-1];
			}
		}
		printf("%d", dp[n][m]);
	}
	else
	{
		int x=(k-1)/m+1;
		int y=(k-1)%m+1;
		dp[1][1]=1;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				if(i==1&&j==1) continue;
				if((i>x&&j<y)||(i<x&&j>y)) continue;
				dp[i][j]=dp[i-1][j]+dp[i][j-1];
			}
		}
		printf("%d", dp[n][m]);
	}
}