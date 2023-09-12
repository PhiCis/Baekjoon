#include<bits/stdc++.h>
using namespace std;

int a[15][15];
int n;

int d[4][4]={100, 70, 40,  0,
			  70, 50, 30,  0, 
			  40, 30, 20,  0,
			   0,  0,  0,  0};

int dp[15][15][20000];

int ans;

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			char c;
			scanf(" %c", &c);
			if(c=='F') a[i][j]=3;
			else a[i][j]=c-'A';
		}
	}
	
	for(int j=2;j<=n;j++)
	{
		for(int k=0;k<(1<<n);k++)
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
		for(int j=1;j<=n;j++)
		{
			if(j==1)
			{
				for(int k=0;k<(1<<n);k++)
				{
					dp[i][j][k]=max(dp[i-1][n][k>>1], dp[i-1][n][(k>>1)+(1<<(n-1))]);
					if(k&1)
					{
						dp[i][j][k]=max(dp[i][j][k], dp[i-1][n][k>>1]+d[a[i][j]][a[i-1][j]]);
					}
				}
			}
			else
			{
				for(int k=0;k<(1<<n);k++)
				{
					dp[i][j][k]=max(dp[i][j-1][k>>1], dp[i][j-1][(k>>1)+(1<<(n-1))]);
					if((k&1)&&(k&2))
					{
						dp[i][j][k]=max(dp[i][j][k], max(dp[i][j-1][(k>>1)+(1<<(n-1))-1], dp[i][j-1][(k>>1)-1])+d[a[i][j]][a[i][j-1]]);
					}
					if(k&1)
					{
						dp[i][j][k]=max(dp[i][j][k], dp[i][j-1][k>>1]+d[a[i][j]][a[i-1][j]]);
					}
				}
			}
		}
	}
	for(int k=0;k<(1<<n);k++)
	{
		ans=max(ans, dp[n][n][k]);
	}
	printf("%d", ans);
}