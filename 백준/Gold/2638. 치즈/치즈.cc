#include<bits/stdc++.h>
using namespace std;

int n, m, a[110][110], c[110][110];
int d[4][2]={1, 0, 0, 1, -1, 0, 0, -1};
int ans;
queue<pair<int, int> > q;

int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>a[i][j];
		}
	}
	while(1)
	{
		int flag=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				c[i][j]=0;
			}
		}
		q.push({1, 1});
		c[1][1]=1;
		while(!q.empty())
		{
			pair<int, int> now=q.front();
			q.pop();
			for(int i=0;i<4;i++)
			{
				pair<int, int> next={now.first+d[i][0], now.second+d[i][1]};
				if(next.first<=0||next.first>n||next.second<=0||next.second>m) continue;
				if(c[next.first][next.second]) continue;
				if(a[next.first][next.second]) continue;
				c[next.first][next.second]=1;
				q.push(next);
			}
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				if(a[i][j]==0) continue;
				int tmp=0;
				for(int k=0;k<4;k++)
				{
					if(c[i+d[k][0]][j+d[k][1]]) tmp++;
				}
				if(tmp>=2) flag=1, a[i][j]=0;
			}
		}
		if(flag==0) break;
		else ans++;
//		for(int i=1;i<=n;i++)
//		{
//			for(int j=1;j<=m;j++)
//			{
//				cout<<a[i][j];
//			}
//			cout<<"\n";
//		}
	}
	cout<<ans;
}