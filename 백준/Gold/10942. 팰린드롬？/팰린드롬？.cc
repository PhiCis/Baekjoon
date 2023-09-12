#include<stdio.h>
#include<string.h>
int n, m, a[2020], dp[2020][2020], s, e;
int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i=1;i<=n;i++)
	{
		dp[i][i]=1;
	}
	for(int i=1;i<n;i++)
	{
		dp[i][i+1]=(a[i]==a[i+1]);
	}
	for(int i=2;i<n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			dp[j][j+i]=dp[j+1][j+i-1]&&(a[j]==a[j+i]);
		}
	}
	scanf("%d", &m);
	for(int i=1;i<=m;i++)
	{
		scanf("%d%d", &s, &e);
		printf("%d\n", dp[s][e]);
	}
}