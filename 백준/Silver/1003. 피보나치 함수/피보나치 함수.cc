#include<bits/stdc++.h>
using namespace std;

int T;
long long dp[45];

int main()
{
	dp[0]=1, dp[1]=0;
	for(int i=2;i<=41;i++)
	{
		dp[i]=dp[i-1]+dp[i-2];
	}
	scanf("%d", &T);
	while(T--)
	{
		int n;
		scanf("%d", &n);
		printf("%lld %lld\n", dp[n], dp[n+1]);
	}
}