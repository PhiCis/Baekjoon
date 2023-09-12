#include<bits/stdc++.h>
using namespace std;

int dp[20], T, C, V, L;
int main()
{
	dp[0]=dp[1]=1;
	for(int i=2;i<=15;i++)
	{
		dp[i]=dp[i-1]+dp[i-2];
	}
	scanf("%d", &T);
	for(int i=1;i<=T;i++)
	{
		scanf("%d%d%d", &C, &V, &L);
		printf("Case #%d: %d\n", i, dp[L]);
	}
}