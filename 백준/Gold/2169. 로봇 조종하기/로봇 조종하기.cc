#include<bits/stdc++.h>
using namespace std;
#define INF 2e9

int n, m;
int a[1010][1010], up[1010][1010], l[1010][1010], r[1010][1010];
int main()
{
	scanf("%d%d", &n, &m);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	l[1][1]=up[1][1]=a[1][1];
	for(int j=2;j<=m;j++)
	{
		up[1][j]=-INF;
	}
	for(int j=2;j<=m;j++)
	{
		l[1][j]=l[1][j-1]+a[1][j];
	}
	for(int j=m;j>=1;j--)
	{
		r[1][j]=-INF;
	}
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			up[i][j]=max(up[i-1][j], max(l[i-1][j], r[i-1][j]))+a[i][j];
		}
		l[i][1]=-INF;
		for(int j=2;j<=m;j++)
		{
			l[i][j]=max(l[i][j-1], up[i][j-1])+a[i][j];
		}
		r[i][m]=-INF;
		for(int j=m-1;j>=1;j--)
		{
			r[i][j]=max(r[i][j+1], up[i][j+1])+a[i][j];
		}
	}
	printf("%d", max(up[n][m], l[n][m]));
}