#include<bits/stdc++.h>
using namespace std;
int t, n, a[2][100010], dp[2][100010];
int main()
{
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		for(int i=1;i<=n;i++)
		{
			scanf("%d", &a[0][i]);
		}
		for(int i=1;i<=n;i++)
		{
			scanf("%d", &a[1][i]);
		}
		dp[0][1]=a[0][1];
		dp[1][1]=a[1][1];
		for(int i=2;i<=n;i++)
		{
			dp[0][i]=max(dp[1][i-1], dp[1][i-2])+a[0][i];
			dp[1][i]=max(dp[0][i-1], dp[0][i-2])+a[1][i];
		}
		printf("%d\n", max(dp[0][n], dp[1][n]));
	}
}