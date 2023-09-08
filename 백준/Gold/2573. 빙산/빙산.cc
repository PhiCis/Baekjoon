#include<bits/stdc++.h>
using namespace std;

int n, m, a[330][330], b[330][330], dp[330][330], ANS;
int d[4][2]={0, 1, 1, 0, 0, -1, -1, 0};

int main()
{
	scanf("%d%d", &n, &m);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	while(1)
	{
		int cnt = 0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				dp[i][j]=0;
			}
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				if(a[i][j]==0||dp[i][j]==1) continue;
				cnt++;
				queue<pair<int, int> > q;
				q.push({i, j});
				dp[i][j]=1;
				while(!q.empty())
				{
					pair<int, int> now = q.front();
					q.pop();
					for(int i=0;i<4;i++)
					{
						pair<int, int> next = {now.first+d[i][0], now.second+d[i][1]};
						if(next.first>n||next.first<=0||next.second>m||next.second<=0) continue;
						if(dp[next.first][next.second]==1||a[next.first][next.second]==0) continue;
						dp[next.first][next.second]=1;
						q.push(next);
					}
				}
			}
		}
		if(cnt>=2)
		{
			printf("%d", ANS);
			return 0;
		}
		if(cnt==0)
		{
			printf("0");
			return 0;
		}
		ANS++;
		for(int i=2;i<n;i++)
		{
			for(int j=2;j<m;j++)
			{
				b[i][j]=0;
				for(int k=0;k<4;k++)
				{
					if(a[i+d[k][0]][j+d[k][1]]==0) b[i][j]++;
				}
			}
		}
		for(int i=2;i<n;i++)
		{
			for(int j=2;j<m;j++)
			{
				a[i][j]=max(0, a[i][j]-b[i][j]);
//				printf("%d ", a[i][j]);
			}
//			printf("\n");
		}
	}
	printf("0");
	return 0;
}