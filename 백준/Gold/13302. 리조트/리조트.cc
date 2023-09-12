#include<bits/stdc++.h>
using namespace std;
#define INF 2000000000

int n, m, c[110];
int ans=INF, dp[110][110];

int main()
{
	scanf("%d%d", &n, &m);
	for(int i=1;i<=m;i++)
	{
		int a;
		scanf("%d", &a);
		c[a]=1;
	}
	
	for(int i=0;i<=n+3;i++)
	{
		for(int j=0;j<=n+3;j++)
		{
			dp[i][j]=INF;
		}
	}
	dp[0][0]=0;
	
	for(int i=1;i<=n;i++)
	{
		if(c[i])
		{
			for(int j=0;j<=n;j++)
			{
				dp[i][j]=min(dp[i][j], dp[i-1][j]);
				if(j>=1)
				{
					if(i<3)
					{
						dp[i][j]=min(dp[i][j], dp[0][j-1]+25000);
					}
					else
					{
						dp[i][j]=min(dp[i][j], dp[i-3][j-1]+25000);
					}
				}
				if(j>=2)
				{
					if(i<5)
					{
						dp[i][j]=min(dp[i][j], dp[0][j-2]+37000);
					}
					else
					{
						dp[i][j]=min(dp[i][j], dp[i-5][j-2]+37000);
					}
				}
			}
		}
		else
		{
			for(int j=0;j<=n;j++)
			{
				dp[i][j]=min(dp[i-1][j+3], dp[i-1][j]+10000);
				if(j>=1)
				{
					if(i<3)
					{
						dp[i][j]=min(dp[i][j], dp[0][j-1]+25000);
					}
					else
					{
						dp[i][j]=min(dp[i][j], dp[i-3][j-1]+25000);
					}
				}
				if(j>=2)
				{
					if(i<5)
					{
						dp[i][j]=min(dp[i][j], dp[0][j-2]+37000);
					}
					else
					{
						dp[i][j]=min(dp[i][j], dp[i-5][j-2]+37000);
					}
				}
			}
		}
	}
	for(int j=0;j<=n;j++)
	{
		ans=min(ans, dp[n][j]);
	}
	printf("%d", ans);
}