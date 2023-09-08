#include<bits/stdc++.h>
using namespace std;
int n, a[550][550], dp[550][550], ans;
int d[4][2]={1, 0, -1, 0, 0, 1, 0, -1};
int dfs(int i, int j)
{
	if(i>n||j>n||i<=0||j<=0) return 0;
	if(dp[i][j]!=-1) return dp[i][j];
	dp[i][j]=1;
	for(int k=0;k<4;k++)
	{
		if(a[i][j]<a[i+d[k][0]][j+d[k][1]])
		{
			dp[i][j]=max(dp[i][j], dfs(i+d[k][0], j+d[k][1])+1);
		}
	}
	return dp[i][j];
}

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			scanf("%d", &a[i][j]);
			dp[i][j]=-1;
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(dp[i][j]==-1) dfs(i, j);
			ans=max(ans, dp[i][j]);
		}
	}
	printf("%d", ans);
}