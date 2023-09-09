#include<bits/stdc++.h>
using namespace std;

int n, a[10010];
long long ans;

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a+1, a+n+1);
	for(int i=1;i<=n-2;i++)
	{
		for(int j=i+1;j<=n-1;j++)
		{
			int k = -(a[i]+a[j]);
			ans+=upper_bound(a+j+1, a+n+1, k) - lower_bound(a+j+1, a+n+1, k);
		}
	}
	printf("%lld", ans);
}