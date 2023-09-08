#include<bits/stdc++.h>
using namespace std;
#define INF 1e9

int n, m ,a[110][110], u, v, sum[110], ans=INF;

int main()
{
	scanf("%d%d", &n, &m);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			a[i][j]=INF;
		}
	}
	for(int i=1;i<=m;i++)
	{
		scanf("%d%d", &u, &v);
		a[u][v]=a[v][u]=1;
	}
	for(int k=1;k<=n;k++)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(i==j) continue;
				a[i][j] = min(a[i][j], a[i][k]+a[k][j]);
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i==j) continue;
			sum[i]+=a[i][j];
		}
		ans = min(ans, sum[i]);
	}
	for(int i=1;i<=n;i++)
	{
		if(sum[i]==ans)
		{
			printf("%d", i);
			return 0;
		}
	}
}