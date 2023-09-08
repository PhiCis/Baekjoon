#include<bits/stdc++.h>
using namespace std;

int n, k, a[1010], s[1010];
int ans = -1e9;

int main()
{
	scanf("%d%d", &n, &k);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
		s[i]=s[i-1]+a[i];
	}
	for(int i=k;i<=n;i++)
	{
		ans = max(ans, s[i]-s[i-k]);
	}
	printf("%d", ans);
}