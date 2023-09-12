#include<bits/stdc++.h>
using namespace std;
int n;
int a[300300];
int dp[300300][60];
int ans;

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i=1;i<60;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[j]>i) continue;
			if(a[j]==i) dp[j][i]=j;
			if(a[j]<i)
			{
				if(dp[j][i-1])
				{
					dp[j][i]=dp[dp[j][i-1]+1][i-1];
				}
			}
		}
	}
	for(int i=1;i<60;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(dp[j][i]) ans = max(ans, i);
		}
	}
	printf("%d", ans);
}