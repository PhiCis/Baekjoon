#include<bits/stdc++.h>
using namespace std;

int t, n, m;
int a[110][110], d1[110][110], d2[110][110], d3[110][110];
int d[4][2]={1, 0, 0, 1, -1, 0, 0, -1};
vector<pair<int, int> > s;

int main()
{
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d%d", &n, &m);
		for(int i=0;i<=n+1;i++)
		{
			for(int j=0;j<=m+1;j++)
			{
				a[i][j]=0;
				d1[i][j]=d2[i][j]=d3[i][j]=5e8;
			}
		}
		s.clear();
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				char c;
				scanf(" %c", &c);
				if(c=='*') a[i][j]=1;
				if(c=='#') a[i][j]=2;
				if(c=='$') a[i][j]=3, s.push_back({i, j});
			}
		}
		deque<pair<int, int> > dq;
		d1[0][0]=0;
		dq.push_back({0, 0});
		while(!dq.empty())
		{
			pair<int, int> now = dq.front();
			dq.pop_front();
			for(int i=0;i<4;i++)
			{
				pair<int, int> next = {now.first+d[i][0], now.second+d[i][1]};
				if(next.first<0||next.first>n+1||next.second<0||next.second>m+1) continue;
				if(d1[next.first][next.second]!=5e8) continue;
				if(a[next.first][next.second]==1) continue;
				if(a[next.first][next.second]==2)
				{
					d1[next.first][next.second]=d1[now.first][now.second]+1;
					dq.push_back(next);
				}
				else
				{
					d1[next.first][next.second]=d1[now.first][now.second];
					dq.push_front(next);
				}
				
			}
		}
		
		d2[s[0].first][s[0].second]=0;
		dq.push_back(s[0]);
		while(!dq.empty())
		{
			pair<int, int> now = dq.front();
			dq.pop_front();
			for(int i=0;i<4;i++)
			{
				pair<int, int> next = {now.first+d[i][0], now.second+d[i][1]};
				if(next.first<0||next.first>n+1||next.second<0||next.second>m+1) continue;
				if(d2[next.first][next.second]!=5e8) continue;
				if(a[next.first][next.second]==1) continue;
				if(a[next.first][next.second]==2)
				{
					d2[next.first][next.second]=d2[now.first][now.second]+1;
					dq.push_back(next);
				}
				else
				{
					d2[next.first][next.second]=d2[now.first][now.second];
					dq.push_front(next);
				}
				
			}
		}
		
		d3[s[1].first][s[1].second]=0;
		dq.push_back(s[1]);
		while(!dq.empty())
		{
			pair<int, int> now = dq.front();
			dq.pop_front();
			for(int i=0;i<4;i++)
			{
				pair<int, int> next = {now.first+d[i][0], now.second+d[i][1]};
				if(next.first<0||next.first>n+1||next.second<0||next.second>m+1) continue;
				if(d3[next.first][next.second]!=5e8) continue;
				if(a[next.first][next.second]==1) continue;
				if(a[next.first][next.second]==2)
				{
					d3[next.first][next.second]=d3[now.first][now.second]+1;
					dq.push_back(next);
				}
				else
				{
					d3[next.first][next.second]=d3[now.first][now.second];
					dq.push_front(next);
				}
				
			}
		}
//		for(int i=0;i<=n+1;i++)
//		{
//			for(int j=0;j<=m+1;j++)
//			{
//				printf("%d ", d1[i][j]);
//			}
//			printf("\n");
//		}
//		for(int i=0;i<=n+1;i++)
//		{
//			for(int j=0;j<=m+1;j++)
//			{
//				printf("%d ", d2[i][j]);
//			}
//			printf("\n");
//		}
//		for(int i=0;i<=n+1;i++)
//		{
//			for(int j=0;j<=m+1;j++)
//			{
//				printf("%d ", d3[i][j]);
//			}
//			printf("\n");
//		}
		
		int ans = 5e8;
		for(int i=0;i<=n+1;i++)
		{
			for(int j=0;j<=m+1;j++)
			{
				if(a[i][j]==1) continue;
				if(a[i][j]==2)
				{
					ans = min(ans, d1[i][j]+d2[i][j]+d3[i][j]-2);
				}
				else
				{
					ans = min(ans, d1[i][j]+d2[i][j]+d3[i][j]);
				}
			}
		}
		printf("%d\n", ans);
	}
}