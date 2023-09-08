#include<bits/stdc++.h>
using namespace std;

int ans=-1e9;
int n, k, a[101010], s[101010];

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
		ans=max(ans, s[i]-s[i-k]);
	}
	printf("%d", ans);
}