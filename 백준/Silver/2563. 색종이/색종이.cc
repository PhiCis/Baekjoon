#include<bits/stdc++.h>
using namespace std;

int n, ans, x, y, a[110][110];

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d", &x, &y);
		for(int j=x;j<x+10;j++)
		{
			for(int k=y;k<y+10;k++)
			{
				a[j][k]=1;
			}
		}
	}
	for(int i=1;i<=100;i++)
	{
		for(int j=1;j<=100;j++)
		{
			if(a[i][j])
			{
				ans++;
			}
		}
	}
	printf("%d", ans);
}
