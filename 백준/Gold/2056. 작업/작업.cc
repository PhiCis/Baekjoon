#include<bits/stdc++.h>
using namespace std;
int n, a, k, m, dp[10010], v, ans;
int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a);
		scanf("%d", &k);
		m=0;
		for(int i=1;i<=k;i++)
		{
			scanf("%d", &v);
			m=max(m, dp[v]);
		}
		dp[i]=m+a;
		if(ans<dp[i]) ans=dp[i];
	}
	printf("%d", ans);
}