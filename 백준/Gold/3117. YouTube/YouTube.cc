#include<bits/stdc++.h>
using namespace std;

int m, p[100010][40], a[100010], n, k;

int main()
{
	scanf("%d%d%d", &n, &m, &k);
	k--;
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i=1;i<=m;i++)
	{
		scanf("%d", &p[i][0]);
	}
	for(int j=1;j<=30;j++)
	{
		for(int i=1;i<=m;i++)
		{
			p[i][j]=p[p[i][j-1]][j-1];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=30;j++)
		{
			if((k>>j)&1)
			{
				a[i]=p[a[i]][j];
			}
		}
		printf("%d ", a[i]);
	}
}