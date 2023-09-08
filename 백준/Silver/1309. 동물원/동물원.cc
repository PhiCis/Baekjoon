#include<bits/stdc++.h>
using namespace std;

int dp[1000010], n;
int main()
{
	dp[1]=3, dp[2]=7;
	for(int i=3;i<=1000000;i++)
	{
		dp[i]=(2*dp[i-1]+dp[i-2])%9901;
	}
	scanf("%d", &n);
	printf("%d", dp[n]);
}