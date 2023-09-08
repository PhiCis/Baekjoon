#include<bits/stdc++.h>
using namespace std;

int n, k, a[1010][1010];

int main()
{
	scanf("%d%d", &n, &k);
	a[n+1>>1][n+1>>1]=1;
	int x=(n+1>>1)-1, y=n+1>>1;
	int pnt=2;
	for(int i=1;i<=n/2;i++)
	{
		for(int j=1;j<=2*i;j++)
		{
			a[x][y++]=pnt++;
		}
		y--;
		x++;
		for(int j=1;j<=2*i;j++)
		{
			a[x++][y]=pnt++;
		}
		x--;
		y--;
		for(int j=1;j<=2*i;j++)
		{
			a[x][y--]=pnt++;
		}
		y++;
		x--;
		for(int j=1;j<=2*i;j++)
		{
			a[x--][y]=pnt++;
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]==k)
			{
				printf("%d %d", i, j);
				return 0;
			}
		}
	}
}