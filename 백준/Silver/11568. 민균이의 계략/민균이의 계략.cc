#include<bits/stdc++.h>
using namespace std;

int n;
int a[1010], dp[1010], ans;

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		dp[i]=1;
		scanf("%d", &a[i]);
		for(int j=1;j<i;j++)
		{
			if(a[i]>a[j]) dp[i]=max(dp[i], dp[j]+1);
		}
		ans=max(ans, dp[i]);
	}
	printf("%d", ans);
}