#include<bits/stdc++.h>
#define INF 2e9
using namespace std;
int n, k, a[110], dp[110][10101];
int main()
{
	scanf("%d%d", &n, &k);
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=k;j++)
		{
			dp[i][j]=INF;
		}
	}
	for(int i=0;i<n;i++)
	{
		dp[i][0]=0;
		for(int j=0;j<=k;j++)
		{
			dp[i+1][j]=min(dp[i+1][j], dp[i][j]);
			if(j+a[i]<=k) dp[i][j+a[i]]=min(dp[i][j+a[i]], dp[i][j]+1);
		}
	}
	if(dp[n-1][k]==INF) printf("-1");
	else printf("%d", dp[n-1][k]);
}