#include<bits/stdc++.h>
using namespace std;

int n, a[550][550];
int d[4][2]={1, 0, 0, 1, -1, 0, 0, -1};
int chk[550][550];
queue<pair<int, int> > q;
int ANS=1000000;

int main()
{
	scanf("%d", &n);
	for(int i=0;i<=n+1;i++)
	{
		a[i][0]=a[i][n+1]=a[0][i]=a[n+1][i]=-1000010;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	int s = 0, e = 1000000;
	while(s<=e)
	{
		int m=s+e>>1;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				chk[i][j]=0;
			}
		}
		int ans = 0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(chk[i][j]==0)
				{
					int tmp = 0;
					chk[i][j]=1;
					q.push({i, j});
					tmp++;
					while(!q.empty())
					{
						pair<int, int> now = q.front();
						q.pop();
						for(int k=0;k<4;k++)
						{
							pair<int, int> next = {now.first+d[k][0], now.second+d[k][1]};
							if(abs(a[next.first][next.second]-a[now.first][now.second])<=m&&chk[next.first][next.second]==0)
							{
								chk[next.first][next.second]=1;
								q.push(next);
								tmp++;
							}
						}
					}
					ans = max(ans, tmp);
				}
			}
		}
		if(ans>=(n*n+1)/2)
		{
			ANS = min(ANS, m);
			e=m-1;
		}
		else
		{
			s=m+1;
		}
	}
	printf("%d", ANS);
}