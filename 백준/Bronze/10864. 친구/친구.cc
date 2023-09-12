#include<bits/stdc++.h>
using namespace std;

int n, m, a, b, g[1010];

int main()
{
	scanf("%d%d", &n, &m);
	for(int i=1;i<=m;i++)
	{
		scanf("%d%d", &a, &b);
		g[a]++;
		g[b]++;
	}
	for(int i=1;i<=n;i++)
	{
		printf("%d\n", g[i]);
	}
}