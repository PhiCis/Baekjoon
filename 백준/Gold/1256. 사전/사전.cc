#include<bits/stdc++.h>
using namespace std;

int n, m, k, dp[110][110];

void print(int n, int m, int k)
{
	if(n==0)
	{
		for(int i=1;i<=m;i++)
		{
			printf("z");
		}
		return;
	}
	else if(m==0)
	{
		for(int i=1;i<=n;i++)
		{
			printf("a");
		}
		return;
	}
	else if(dp[n-1][m]>=k)
	{
		printf("a");
		print(n-1, m, k);
	}
	else
	{
		printf("z");
		print(n, m-1, k-dp[n-1][m]);
	}
}

int main()
{
	scanf("%d%d%d", &n, &m, &k);
	for(int i=0;i<=n;i++)
	{
		dp[i][0]=1;
	}
	for(int j=0;j<=m;j++)
	{
		dp[0][j]=1;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			dp[i][j]=dp[i-1][j]+dp[i][j-1];
			if(dp[i][j]>1000000000) dp[i][j]=1000000001;
		}
	}
	if(dp[n][m]<k)
	{
		printf("-1");
		return 0;
	}
	print(n, m, k);
}