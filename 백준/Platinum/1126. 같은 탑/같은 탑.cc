#include<bits/stdc++.h>
using namespace std;

int n, a[55], dp[55][500005];
int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(int i=0;i<55;i++)
	{
		for(int j=0;j<500005;j++)
		{
			dp[i][j]=-1;
		}
	}
	
	dp[1][0]=0;
	dp[1][a[1]]=a[1];
	for(int i=2;i<=n;i++)
	{
		for(int j=0;j<=500000;j++)
		{
			if(dp[i-1][j]==-1) continue;
			dp[i][j]=max(dp[i][j], dp[i-1][j]);
			dp[i][j+a[i]]=max(dp[i][j+a[i]], dp[i-1][j]+a[i]);
			if(j<a[i])
			{
				dp[i][a[i]-j]=max(dp[i][a[i]-j], dp[i-1][j]-j+a[i]);
			}
			else
			{
				dp[i][j-a[i]]=max(dp[i][j-a[i]], dp[i-1][j]);
			}
		}
	}
	if(dp[n][0]<=0) printf("-1");
	else printf("%d", dp[n][0]);
}