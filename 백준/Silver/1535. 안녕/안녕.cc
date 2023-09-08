#include<bits/stdc++.h>
using namespace std;

int n, a[30], b[30];
int dp[120];
int ans;

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &b[i]);
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=100;j>=a[i]+1;j--)
		{
			dp[j] = max(dp[j], dp[j-a[i]]+b[i]);
		}
	}
	for(int i=1;i<=100;i++)
	{
		ans=max(ans, dp[i]);
	}
	printf("%d", ans);
}