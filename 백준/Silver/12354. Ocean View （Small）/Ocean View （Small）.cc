#include<bits/stdc++.h>
using namespace std;

int t, n, a[110], dp[110];
int cnt;

int main()
{
	scanf("%d", &t);
	while(t--)
	{
		cnt++;
		scanf("%d", &n);
		for(int i=1;i<=n;i++)
		{
			dp[i]=1;
			scanf("%d", &a[i]);
			for(int j=1;j<i;j++)
			{
				if(a[i]>a[j]) dp[i]=max(dp[i], dp[j]+1);
			}
		}
		int ans = 0;
		for(int i=1;i<=n;i++)
		{
			ans = max(ans, dp[i]);
		}
		printf("Case #%d: %d\n", cnt, n-ans);
	}
}