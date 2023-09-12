#include<bits/stdc++.h>
using namespace std;

int n, m, t[1010], a[1010][1010], c[1010];

int main()
{
	scanf("%d%d", &n, &m);
	for(int i=1;i<=m;i++)
	{
		scanf("%d", &t[i]);
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			scanf("%d", &a[i][j]);
			if(a[i][j]!=t[i]) c[t[i]]++;
			if(a[i][j]==t[i]) c[j]++;
		}
	}
	for(int i=1;i<=n;i++)
	{
		printf("%d\n", c[i]);
	}
}