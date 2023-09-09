#include<bits/stdc++.h>
using namespace std;

int n, a[110];
long long dp[110][30];
int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	dp[1][a[1]]=1;
	for(int i=2;i<n;i++)
	{
		for(int j=a[i];j<=20;j++)
		{
			dp[i][j]+=dp[i-1][j-a[i]];
		}
		for(int j=0;j<=20-a[i];j++)
		{
			dp[i][j]+=dp[i-1][j+a[i]];
		}
	}
	printf("%lld", dp[n-1][a[n]]);
}