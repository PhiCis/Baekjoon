#include<bits/stdc++.h>
using namespace std;

int n, m, dp[1010][40], a, ans;
int main()
{
	scanf("%d%d", &n, &m);
	dp[0][0]=0, dp[0][1]=-1;
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a);
		if(a==1)
		{
			dp[i][0]=dp[i-1][0]+1;
			if(dp[i][0]>ans) ans=dp[i][0];
			for(int j=1;j<=m;j++)
			{
				if(j&1)
				{
					dp[i][j]=max(dp[i-1][j], dp[i-1][j-1]);
				}
				else
				{
					dp[i][j]=max(dp[i-1][j], dp[i-1][j-1])+1;
					if(dp[i][j]>ans) ans=dp[i][j];
				}
			}
		}
		else
		{
			dp[i][0]=dp[i-1][0];
			for(int j=1;j<=m;j++)
			{
				if(j&1)
				{
					dp[i][j]=max(dp[i-1][j], dp[i-1][j-1])+1;
					if(dp[i][j]>ans) ans=dp[i][j];
				}
				else
				{
					dp[i][j]=max(dp[i-1][j], dp[i-1][j-1]);
				}
			}
		}
	}
	printf("%d", ans);
}