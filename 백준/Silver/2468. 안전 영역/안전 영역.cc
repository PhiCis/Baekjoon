#include<bits/stdc++.h>
using namespace std;

int n, a[110][110], chk[110][110];
int ans = 0;
int d[4][2]={1, 0, 0, 1, -1, 0, 0, -1};

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(int i=0;i<=100;i++)
	{
		int tmp = 0;
		for(int j=1;j<=n;j++)
		{
			for(int k=1;k<=n;k++)
			{
				chk[j][k]=0;
			}
		}
		for(int j=1;j<=n;j++)
		{
			for(int k=1;k<=n;k++)
			{
				if(a[j][k]>i&&chk[j][k]==0)
				{
					tmp++;
					queue<pair<int, int> >q;
					q.push({j, k});
					chk[j][k]=1;
					while(!q.empty())
					{
						pair<int, int> now = q.front();
						q.pop();
						for(int x=0;x<4;x++)
						{
							pair<int, int> next = {now.first+d[x][0], now.second+d[x][1]};
							if(a[next.first][next.second]>i&&chk[next.first][next.second]==0)
							{
								chk[next.first][next.second]=1;
								q.push(next);
							}
						}
					}
				}
			}
		}
		ans = max(ans, tmp);
	}
	printf("%d", ans);
}