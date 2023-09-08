#include<bits/stdc++.h>
using namespace std;
#define INF 1e8

int n, a, b, q, u;
int dp[25][25][25];
int ans = INF;

int main()
{
	scanf("%d", &n);
	scanf("%d%d", &a, &b);
	if(a>b) swap(a, b);
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(i==a&&j==b) dp[0][i][j]=0;
			else dp[0][i][j]=INF;
		}
	}
	scanf("%d", &q);
	for(int i=1;i<=q;i++)
	{
		for(int j=1;j<=n;j++)
		{
			for(int k=j+1;k<=n;k++)
			{
				dp[i][j][k]=INF;
			}
		}
		scanf("%d", &u);
		for(int j=1;j<=n;j++)
		{
			for(int k=j+1;k<=n;k++)
			{
				if(j==u||u==k)
				{
					dp[i][j][k]=min(dp[i][j][k], dp[i-1][j][k]);
				}
				else if(u<j)
				{
					dp[i][u][k]=min(dp[i][u][k], dp[i-1][j][k]+j-u);
				}
				else if(u<k)
				{
					dp[i][u][k]=min(dp[i][u][k], dp[i-1][j][k]+u-j);
					dp[i][j][u]=min(dp[i][j][u], dp[i-1][j][k]+k-u);
				}
				else
				{
					dp[i][j][u]=min(dp[i][j][u], dp[i-1][j][k]+u-k);
				}
			}
		}
		/*
		for(int j=1;j<=n;j++)
		{
			for(int k=j+1;k<=n;k++)
			{
				printf("%d ", dp[i][j][k]);
			}
			printf("\n");
		}
		*/
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			ans = min(ans, dp[q][i][j]);
		}
	}
	printf("%d", ans);
	
}