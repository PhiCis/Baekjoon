#include<bits/stdc++.h>
using namespace std;
int n;
char a[110][110];
int chk1[110][110], chk2[110][110];
int d[4][2]={1, 0, 0, 1, -1, 0, 0, -1};
int cnt1, cnt2;

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			scanf(" %c", &a[i][j]);
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(chk1[i][j]==0)
			{
				cnt1++;
				chk1[i][j]=1;
				queue<pair<int, int> > q;
				q.push({i, j});
				while(!q.empty())
				{
					pair<int, int>  now = q.front();
					q.pop();
					for(int k=0;k<4;k++)
					{
						pair<int, int> next = {now.first+d[k][0], now.second+d[k][1]};
						if(next.first<=0||next.first>n||next.second<=0|next.second>n) continue;
						if(chk1[next.first][next.second]) continue;
						if(a[now.first][now.second]!=a[next.first][next.second]) continue;
						chk1[next.first][next.second]=1;
						q.push(next);
					}
				}
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]=='G') a[i][j]='R';
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(chk2[i][j]==0)
			{
				cnt2++;
				chk2[i][j]=1;
				queue<pair<int, int> > q;
				q.push({i, j});
				while(!q.empty())
				{
					pair<int, int>  now = q.front();
					q.pop();
					for(int k=0;k<4;k++)
					{
						pair<int, int> next = {now.first+d[k][0], now.second+d[k][1]};
						if(next.first<=0||next.first>n||next.second<=0|next.second>n) continue;
						if(chk2[next.first][next.second]) continue;
						if(a[now.first][now.second]!=a[next.first][next.second]) continue;
						chk2[next.first][next.second]=1;
						q.push(next);
					}
				}
			}
		}
	}
	printf("%d %d", cnt1, cnt2);
}