#include<bits/stdc++.h>
using namespace std;

int dp[1100000];
int a, b, d, n;
int ans;
int main()
{
	dp[0]=1;
	scanf("%d%d%d%d", &a, &b, &d, &n);
	dp[a]=1;
	for(int i=a+1;i<=n;i++)
	{
		dp[i]=dp[i-1]+dp[i-a]-(i-b>=0?dp[i-b]:0);
		while(dp[i]<0) dp[i]+=1000;
		dp[i]%=1000;
	}
	for(int i=n;i>=max(n-d+1, 0);i--){
		ans+=dp[i];
		if(ans>1000) ans%=1000;
	}
	printf("%d", ans);
}