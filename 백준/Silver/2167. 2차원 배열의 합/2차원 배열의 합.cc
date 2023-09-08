#include<bits/stdc++.h>
using namespace std;

long long n, m, a[330][330], s[330][330], k, x, y, z, w;

int main()
{
	scanf("%lld%lld", &n, &m);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			scanf("%lld", &a[i][j]);
			s[i][j]=s[i-1][j]+s[i][j-1]-s[i-1][j-1]+a[i][j];
		}
	}
	scanf("%lld", &k);
	for(int i=1;i<=k;i++)
	{
		scanf("%lld%lld%lld%lld", &x, &y, &z, &w);
		printf("%lld\n", s[z][w]-s[x-1][w]-s[z][y-1]+s[x-1][y-1]);
	}
}