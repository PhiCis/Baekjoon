#include<bits/stdc++.h>
using namespace std;

int a[15][15];
int n, m;

int d[5][5]={10, 8, 7, 5, 1,
			  8, 6, 4, 3, 1,
			  7, 4, 3, 2, 1,
			  5, 3, 2, 2, 1,
			  1, 1, 1, 1, 0};

int dp[15][15][20000];

int ans;

int main()
{
	scanf("%d%d", &n, &m);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			char c;
			scanf(" %c", &c);
			if(c=='F') a[i][j]=4;
			else a[i][j]=c-'A';
		}
	}
	
	for(int j=2;j<=m;j++)
	{
		for(int k=0;k<(1<<m);k++)
		{
			dp[1][j][k]=dp[1][j-1][k>>1];
			if((k&1)&&(k&2))
			{
				dp[1][j][k]=max(dp[1][j][k], dp[1][j-1][(k>>1)-1]+d[a[1][j]][a[1][j-1]]);
			}
		}
	}
	
	
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(j==1)
			{
				for(int k=0;k<(1<<m);k++)
				{
					dp[i][j][k]=max(dp[i-1][m][k>>1], dp[i-1][m][(k>>1)+(1<<(m-1))]);
					if(k&1)
					{
						dp[i][j][k]=max(dp[i][j][k], dp[i-1][m][k>>1]+d[a[i][j]][a[i-1][j]]);
					}
				}
			}
			else
			{
				for(int k=0;k<(1<<m);k++)
				{
					dp[i][j][k]=max(dp[i][j-1][k>>1], dp[i][j-1][(k>>1)+(1<<(m-1))]);
					if((k&1)&&(k&2))
					{
						dp[i][j][k]=max(dp[i][j][k], max(dp[i][j-1][(k>>1)+(1<<(m-1))-1], dp[i][j-1][(k>>1)-1])+d[a[i][j]][a[i][j-1]]);
					}
					if(k&1)
					{
						dp[i][j][k]=max(dp[i][j][k], dp[i][j-1][k>>1]+d[a[i][j]][a[i-1][j]]);
					}
				}
			}
		}
	}
	for(int k=0;k<(1<<m);k++)
	{
		ans=max(ans, dp[n][m][k]);
	}
	printf("%d", ans);
}