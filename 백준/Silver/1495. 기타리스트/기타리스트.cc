#include<bits/stdc++.h>
using namespace std;

int n, m, s, a[110];
long long dp[110][1010];
int main()
{
	scanf("%d%d%d", &n, &s, &m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	dp[0][s]=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=a[i];j<=m;j++)
		{
			dp[i][j]+=dp[i-1][j-a[i]];
		}
		for(int j=0;j<=m-a[i];j++)
		{
			dp[i][j]+=dp[i-1][j+a[i]];
		}
	}
	for(int i=m;i>=0;i--)
	{
		if(dp[n][i])
		{
			printf("%d", i);
			return 0;
		}
	}
	printf("-1");
	return 0;
}