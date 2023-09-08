#include<bits/stdc++.h>
using namespace std;

int n, m, a[60][60], b[60][60];
int cnt;

int main()
{
	scanf("%d%d", &n, &m);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			scanf("%1d", &a[i][j]);
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			scanf("%1d", &b[i][j]);
		}
	}
	for(int i=1;i<=n-2;i++)
	{
		for(int j=1;j<=m-2;j++)
		{
			if(a[i][j]!=b[i][j])
			{
				for(int k=0;k<3;k++)
				{
					for(int l=0;l<3;l++)
					{
						a[i+k][j+l] = 1-a[i+k][j+l];
					}
				}
				cnt++;
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(a[i][j]!=b[i][j])
			{
				printf("-1");
				return 0;
			}
		}
	}
	printf("%d", cnt);
}