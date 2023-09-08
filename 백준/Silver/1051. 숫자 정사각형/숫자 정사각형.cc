#include<stdio.h>
#include<algorithm>
using namespace std;
int n, m, a[100][100], i, j, k;
int main()
{
	scanf("%d%d", &n, &m);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			scanf("%1d", &a[i][j]);
		}
	}
	for(k=min(n, m);k>0;k--)
	{
		for(i=1;i+k-1<=n;i++)
		{
			for(j=1;j+k-1<=m;j++)
			{
				if(a[i][j]==a[i+k-1][j]&&a[i][j]==a[i][j+k-1]&&a[i][j]==a[i+k-1][j+k-1])
				{
					printf("%d", k*k);
					return 0;
				}
			}
		}
	}
}