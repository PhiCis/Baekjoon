#include<bits/stdc++.h>
using namespace std;
int n;
int a[10010], dp[10010][3];
int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	dp[1][1]=a[1];
	for(int i=1;i<=n;i++)
	{
		dp[i][0]=max(max(dp[i-1][0], dp[i-1][1]), dp[i-1][2]);
		dp[i][1]=dp[i-1][0]+a[i];
		dp[i][2]=dp[i-1][1]+a[i];
	}
	printf("%d",max(max(dp[n][0], dp[n][1]), dp[n][2]));
}