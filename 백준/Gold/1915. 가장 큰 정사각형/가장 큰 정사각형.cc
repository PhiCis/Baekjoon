#include<bits/stdc++.h>
using namespace std;

int n, m, a[1010][1010], dp[1010][1010], ans;
int main()
{
	scanf("%d%d", &n, &m);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			scanf("%1d", &a[i][j]);
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(a[i][j]==1)
			{
				dp[i][j]=min(dp[i][j-1], min(dp[i-1][j], dp[i-1][j-1]))+1;
			}
			ans=max(ans, dp[i][j]);
		}
	}
	printf("%d", ans*ans);
}
