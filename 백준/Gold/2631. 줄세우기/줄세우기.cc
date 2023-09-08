#include<bits/stdc++.h>
using namespace std;
int n;
int a[220];
int dp[220];
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
		dp[i]=1;
		for(int j=1;j<i;j++)
		{
			if(a[j]<a[i])
			{
				dp[i]=max(dp[i], dp[j]+1);
			}
		}
		ans=max(ans, dp[i]);
	}
	printf("%d", n-ans);
}