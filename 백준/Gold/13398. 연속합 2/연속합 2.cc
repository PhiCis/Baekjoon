#include<bits/stdc++.h>
using namespace std;
#define INF 2e9

int n, a[100010], dp[100010][2], ans=-INF;
int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i=1;i<=n;i++)
	{
		dp[i][0]=max(dp[i-1][0]+a[i], a[i]);
		dp[i][1]=i==1?-INF:max(dp[i-1][1]+a[i], dp[i-2][0]+a[i]);
		if(dp[i][0]>ans) ans=dp[i][0];
		if(dp[i][1]>ans) ans=dp[i][1];
	}
	printf("%d", ans);
}