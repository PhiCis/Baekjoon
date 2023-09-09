#include<bits/stdc++.h>
using namespace std;

int n, m, a[100][100];
int d[8][2]={-1, -1, -1, 0, -1, 1, 0, -1, 0, 1, 1, -1, 1, 0, 1, 1};
int ans;

int main()
{
	scanf("%d%d", &n, &m);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			char tmp;
			scanf(" %c", &tmp);
			if(tmp=='o') a[i][j]=1;
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(a[i][j]==1)
			{
				for(int k=0;k<8;k++)
				{
					if(a[i+d[k][0]][j+d[k][1]]) ans++;
				}
			}
		}
	}
	for(int i=1;i<=n;i++)
	for(int j=1;j<=m;j++)
	{
		if(a[i][j]==0)
		{
			a[i][j]=1;
			int tmp=0;
			for(int i=1;i<=n;i++)
			{
				for(int j=1;j<=m;j++)
				{
					if(a[i][j]==1)
					{
						for(int k=0;k<8;k++)
						{
							if(a[i+d[k][0]][j+d[k][1]]) tmp++;
						}
					}
				}
			}
			ans=max(ans, tmp);
			a[i][j]=0;
		}
	}
	printf("%d", ans/2);
}